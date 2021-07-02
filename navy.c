/*
** navy.c for navy in /home/DamsSAO/Taf epitech/navy
** 
** Made by Damien Cochard
** Login   <DamsSAO@epitech.net>
** 
** Started on  Wed Feb  1 09:00:04 2017 Damien Cochard
** Last update Sun Feb 19 15:21:32 2017 Damien Cochard
*/

#include "main.h"

void	print(char **str, char **str2)
{
  int cnt;

  cnt = 0;
  my_printf("my positions:\n");
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

char	**map()
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

char	**mdrpasbo(char	**av)
{
  static char	**ret;

  if (av[0][0] != ' ')
    ret = av;
  return ret;
}

void	navy(int x)
{
  char	**str;
  char	**str2;
  char	**rap;

  rap = malloc(sizeof(char*) * 6 + 2);
  rap[0] = " ";
  rap = mdrpasbo(rap);
  str = map();
  str = placement_boat_2(str, rap);
  str = placement_boat_3(str, rap);
  str = placement_boat_4(str, rap);
  str = placement_boat_5(str, rap);
  str2 = map();
  my_printf("enemy connected\n\n");
  turn(str, str2, x);
}
