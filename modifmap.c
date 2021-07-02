/*
** modifmap.c for modifmap in /home/DamsSAO/tafEpitech/1er/PSU_2016_navy
** 
** Made by Damien Cochard
** Login   <DamsSAO@epitech.net>
** 
** Started on  Fri Feb 17 12:36:19 2017 Damien Cochard
** Last update Sun Feb 19 16:00:46 2017 Damien Cochard
*/

#include "main.h"

int	shooting(int i)
{
  static int	cnt;

  if (i == 2)
    return cnt;
  else 
    cnt = i;
  return cnt;
}

char	**modifmap(char *s, int shoot, char **map)
{
  int	x;
  int	y;

  x = ((s[0] - 64) * 2);
  y = ((s[1] - 48) + 2);
  if (shoot == 0)
    map[y][x] = 'o';
  else
    map[y][x] = 'x';
  return map;
}

char	**modifmap2(int x, int y, char **map)
{
  if (map[y][x] == '.')
    {
      map[y][x] = 'o';
      my_printf("missed\n\n");
      shooting(0);
    }
  else
    {
      map[y][x] = 'x';
      my_printf("hit\n\n");
      shooting(1);
    }
  return map;
}
