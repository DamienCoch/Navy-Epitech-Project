/*
** gotsig.c for trad signal for podition in /home/DamsSAO/tafEpitech/1er/PSU_2016_navy
** 
** Made by Damien Cochard
** Login   <DamsSAO@epitech.net>
** 
** Started on  Fri Feb 17 10:56:19 2017 Damien Cochard
** Last update Sun Feb 19 17:33:50 2017 Benoit Bouton
*/

#include "main.h"

void	hit(int mysignal)
{
  int	forhonorme;

  mysignal = mysignal;
  forhonorme = hit1(1);
  forhonorme = forhonorme;
}

void	missed(int mysignal)
{
  mysignal = mysignal;
}

int	hit1(int x)
{
  static int	nbr = 0;
  static int	verif = 0;

  if (verif == 1)
    {
      nbr = 0;
      verif = 0;
    }
  if (x == 0)
    {
      verif = 1;
      return nbr;
    }
  else
    nbr = 1;
  return nbr;
}

int	sendsig(char *s, int player1_pid)
{
  int	piew;
  int	x;
  int	y;

  x = ((s[0] - 'A') + 2);
  y = ((s[1] - 48) + 2);
  while (x != 0)
    {
      usleep(50);
      kill(player1_pid, SIGUSR1);
      x = x - 1;
    }
  x++;
  while ((y + 1) != 0)
    {
      usleep(50);
      kill(player1_pid, SIGUSR2);
      y = y - 1;
    }
  kill(player1_pid, SIGUSR1);
  signal(SIGUSR1, hit);
  signal(SIGUSR2, missed);
  pause();
  if (hit1(0) == 1)
    {
      piew = 1;
      my_printf("hit\n\n");
    }
  else
    {
      piew = 0;
      my_printf("missed\n\n");
    }
  return piew;
}

char	**gotsig(char **map, int z, int player_pid)
{
  int	x;
  int	y;
  char	cord_x;
  char	cord_x_p1;

  x = 0;
  y = 0;
  while (stop(0) != 1)
    {
      signal(SIGUSR1, sigcapt);
      signal(SIGUSR2, sigcapt2);
      pause();
      x = x + 1;
    }
  while (stop(0) != 1)
    {
      signal(SIGUSR1, sigcapt2);
      signal(SIGUSR2, sigcapt);
      pause();
      y = y + 1;
    }
  cord_x = convert_int_to_char(x);
  cord_x_p1 = convert_int_to_char_p1(x);
  if (z != 0)
    {
      x = ((x * 2) - (z * 2)) + 2;
      my_printf("%c%d: ", cord_x_p1, (y - 2));
    }
  else
    {
      x = (x * 2) - 4;
      my_printf("%c%d: ", cord_x, (y - 2));
    }
  map = modifmap2(x, y, map);
  sendshoot(player_pid);
  return map;
}
