/*
** position.c for position in /home/Starkiller/PSU_2016_navy/ben
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Thu Feb  2 15:15:27 2017 Benoit Bouton
** Last update Sat Feb 18 13:59:50 2017 Benoit Bouton
*/

#include "main.h"

char	**placement_boat_2(char **str2, char **av)
{
  int	cnt;
  char	boat_2;
  t_cord	boat_2_bis;

  cnt = 1;
  boat_2_bis.y_start = (2 + read_2(av));
  boat_2_bis.x_start = (2 + (2 * read_cord_2(av)));
  boat_2 = read_boat_2(av);
  boat_2_bis.y_end = (2 + read_2_end(av));
  boat_2_bis.x_end = (2 + (2 * read_cord_2_end(av)));
  str2[boat_2_bis.y_start][boat_2_bis.x_start] = boat_2;
  if (boat_2_bis.x_start < boat_2_bis.x_end
      && boat_2_bis.y_start < boat_2_bis.y_end)
    exit(84);
  while (boat_2_bis.y_start < boat_2_bis.y_end)
    {
      boat_2_bis.y_start = boat_2_bis.y_start + 1;
      str2[boat_2_bis.y_start][boat_2_bis.x_start] = boat_2;
      cnt++;
    }
  while (boat_2_bis.x_start < boat_2_bis.x_end)
    {
      boat_2_bis.x_start = boat_2_bis.x_start + 2;
      str2[boat_2_bis.y_start][boat_2_bis.x_start] = boat_2;
      cnt++;
    }
  if (cnt != 2)
    exit(84);
  return (str2);
}

char	**placement_boat_3(char **str2, char **av)
{
  int	cnt;
  char	boat_3;
  t_cord	boat_3_bis;

  cnt = 1;
  boat_3_bis.y_start = (2 + read_3(av));
  boat_3_bis.x_start = (2 + (2 * read_cord_3(av)));
  boat_3 = read_boat_3(av);
  boat_3_bis.y_end = (2 + read_3_end(av));
  boat_3_bis.x_end = (2 + (2 * read_cord_3_end(av)));
  str2[boat_3_bis.y_start][boat_3_bis.x_start] = boat_3;
  str2[boat_3_bis.y_end][boat_3_bis.x_end] = boat_3;
  if (boat_3_bis.x_start < boat_3_bis.x_end
      && boat_3_bis.y_start < boat_3_bis.y_end)
    exit(84);
  while (boat_3_bis.y_start < boat_3_bis.y_end)
    {
      boat_3_bis.y_start = boat_3_bis.y_start + 1;
      str2[boat_3_bis.y_start][boat_3_bis.x_start] = boat_3;
      cnt++;
    }
  while (boat_3_bis.x_start < boat_3_bis.x_end)
    {
      boat_3_bis.x_start = boat_3_bis.x_start + 2;
      str2[boat_3_bis.y_start][boat_3_bis.x_start] = boat_3;
      cnt++;
    }
  if (cnt != 3)
    exit(84);
  return (str2);
}

char	**placement_boat_4(char **str2, char **av)
{
  int	cnt;
  char	boat_4;
  t_cord	boat_4_bis;

  cnt = 1;
  boat_4_bis.y_start = (2 + read_4(av));
  boat_4_bis.x_start = (2 + (2 * read_cord_4(av)));
  boat_4 = read_boat_4(av);
  boat_4_bis.y_end = (2 + read_4_end(av));
  boat_4_bis.x_end = (2 + (2 * read_cord_4_end(av)));
  str2[boat_4_bis.y_start][boat_4_bis.x_start] = boat_4;
  str2[boat_4_bis.y_end][boat_4_bis.x_end] = boat_4;
  if (boat_4_bis.x_start < boat_4_bis.x_end
      && boat_4_bis.y_start < boat_4_bis.y_end)
    exit(84);
  while (boat_4_bis.y_start < boat_4_bis.y_end)
    {
      boat_4_bis.y_start = boat_4_bis.y_start + 1;
      str2[boat_4_bis.y_start][boat_4_bis.x_start] = boat_4;
      cnt++;
    }
  while (boat_4_bis.x_start < boat_4_bis.x_end)
    {
      boat_4_bis.x_start = boat_4_bis.x_start + 2;
      str2[boat_4_bis.y_start][boat_4_bis.x_start] = boat_4;
      cnt++;
    }
  if (cnt != 4)
    exit(84);
  return (str2);
}

char	**placement_boat_5(char **str2, char **av)
{
  int	cnt;
  char	boat_5;
  t_cord	boat_5_bis;

  cnt = 1;
  boat_5_bis.y_start = (2 + read_5(av));
  boat_5_bis.x_start = (2 + (2 * read_cord_5(av)));
  boat_5 = read_boat_5(av);
  boat_5_bis.y_end = (2 + read_5_end(av));
  boat_5_bis.x_end = (2 + (2 * read_cord_5_end(av)));
  str2[boat_5_bis.y_start][boat_5_bis.x_start] = boat_5;
  str2[boat_5_bis.y_end][boat_5_bis.x_end] = boat_5;
  if (boat_5_bis.x_start < boat_5_bis.x_end
      && boat_5_bis.y_start < boat_5_bis.y_end)
    exit(84);
  while (boat_5_bis.y_start < boat_5_bis.y_end)
    {
      boat_5_bis.y_start = boat_5_bis.y_start + 1;
      str2[boat_5_bis.y_start][boat_5_bis.x_start] = boat_5;
      cnt++;
    }
  while (boat_5_bis.x_start < boat_5_bis.x_end)
    {
      boat_5_bis.x_start = boat_5_bis.x_start + 2;
      str2[boat_5_bis.y_start][boat_5_bis.x_start] = boat_5;
      cnt++;
    }
  if (cnt != 5)
    exit(84);
  return (str2);
}
