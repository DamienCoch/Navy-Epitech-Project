/*
** turn.c for turn for 2 players in /home/DamsSAO/tafEpitech/1er/PSU_2016_navy/ben
** 
** Made by Damien Cochard
** Login   <DamsSAO@epitech.net>
** 
** Started on  Mon Feb 13 14:49:21 2017 Damien Cochard
** Last update Sun Feb 19 15:49:31 2017 Damien Cochard
*/

#include "main.h"

void	sigcapt(int mysignal)
{
  mysignal = mysignal;
}

void	sigcapt2(int mysignal)
{
  int	forhonorme;

  mysignal = mysignal;
  forhonorme = stop(1);
  forhonorme = forhonorme;
}

int	stop(int x)
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

void	turn_p2(char **str, char **str2, int player1_pid)
{
  char	*s;
  int	pass;
  static int	cnt;
  int	shoot;

  cnt = 0;
  s = malloc(sizeof(char) * 10 + 2);
  pause();
  my_printf("sucessfully connected\n\n");
  print(str, str2);
  my_printf("waiting for enemy's attack...\n");
  str = gotsig(str, 3, player1_pid);
  while (cnt != 14)
    {
      pass = 0;
      while (pass != 1)
	{
	  my_printf("attack: ");
	  s = get_next_line(0);
	  if ((s[0] >= 'A' && s[0] <= 'H') && (s[1] >= '1' && s[1] <= '8'))
	    {
	      my_printf("%s: ", s);
	      shoot = sendsig(s, player1_pid);
	      str2 = modifmap(s, shoot, str2);
	      print(str, str2);
	      pass = pass + 1;
	    }
	  else
	    my_printf("wrong position\n");
	}
      my_printf("waiting for enemy's attack...\n");
      str = gotsig(str, 3, player1_pid);
    }
}
