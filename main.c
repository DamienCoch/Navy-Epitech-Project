/*
** main.c for main in /home/Starkiller/PSU_2016_navy
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Tue Jan 31 16:57:21 2017 Benoit Bouton
** Last update Sun Feb 19 17:59:12 2017 Benoit Bouton
*/

#include "main.h"

void	sendshoot(int player_pid)
{
  if (shooting(2) == 1)
    kill(player_pid, SIGUSR1);
  else
    kill(player_pid, SIGUSR2);
}

void	usage()
{
  my_printf("USAGE\n");
  my_printf("         ./navy [first_player_pid] navy_positions\n");
  my_printf("DESCRIPTION\n");
  my_printf("            first_player_pid only for the 2nd player.");
  my_printf(" pid of the first player.\n");
  my_printf("            navy_positions file representing the");
  my_printf(" positions of the ships.\n");
}

void	turn(char **str, char **str2, int x_pid)
{
  char	*s;
  int	pass;
  static int	y;
  int	shoot;

  s = malloc(sizeof(char) * 10 + 2);
  while (y != 14)
    {
      print(str, str2);
      kill(x_pid, SIGUSR1);
      pass = 0;
      while (pass != 1)
	{
	  my_printf("attack: ");
	  s = get_next_line(0);
	  if ((s[0] >= 'A' && s[0] <= 'H') && (s[1] >= '1' && s[1] <= '8'))
	    {
	      my_printf("%s: ", s);
	      pass = pass + 1;
	    }
	  else
	    {
	      my_printf("wrong position\n");
	    }
	}
      shoot = sendsig(s, x_pid);
      str2 = modifmap(s, shoot, str2);
      my_printf("waiting for enemy's attack...\n");
      str = gotsig(str, 0, x_pid);
    }
}

int	main(int ac, char **av)
{
  if (ac < 2 || ac > 3)
    exit(84);
  else
    connexion(ac, av);
  return (0);
}
