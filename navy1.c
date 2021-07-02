/*
** navy.c for navy in /home/DamsSAO/Taf epitech/navy
** 
** Made by Damien Cochard
** Login   <DamsSAO@epitech.net>
** 
** Started on  Wed Feb  1 09:00:04 2017 Damien Cochard
** Last update Thu Feb 16 17:48:24 2017 Benoit Bouton
*/

#include "main.h"

void	print_enemy(char **str, char **str2)
{
  int cnt;

  cnt = 0;
  my_printf("\nmy positions:\n");
  while (cnt != 10)
    {
      cnt++;
      my_printf("%s", str[cnt]);
    }
  cnt = 0;
  my_printf("\nenemy's positions:\n");
  while	(cnt != 10)
    {
      cnt++;
      my_printf("%s", str2[cnt]);
    }
  my_printf("\n");
}

char	**map_enemy()
{
  char	**str;
  char	*temp;
  int	cnt;
  int	fd;

  cnt = 0;
  str = (char **)malloc((10000) * sizeof(char *));
  fd = open("map", O_RDONLY);
  while (cnt != 10)
    {
      temp = malloc(sizeof(char) * 20 + 2);
      cnt++;
      read(fd, temp, 18);
      str[cnt]= temp;
    }
  close(fd);
  return str;
}

void	navy_enemy(int player1_pid, char **av)
{
  char	**str;
  char	**str2;

  str = map_enemy();
  str = placement_boat_2_enemy(str, av);
  str = placement_boat_3_enemy(str, av);
  str = placement_boat_4_enemy(str, av);
  str = placement_boat_5_enemy(str, av);
  str2 = map_enemy();
  turn_p2(str, str2, player1_pid);
}
