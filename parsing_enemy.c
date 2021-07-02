/*
** parsing.c for parsing in /home/Starkiller/PSU_2016_navy/ben
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Wed Feb  1 14:44:36 2017 Benoit Bouton
** Last update Thu Feb 16 17:40:17 2017 Benoit Bouton
*/

#include "main.h"

int	read_cord_2_enemy(char **av)
{
  int	fd;
  char	buf[32];

  fd = open(av[2], O_RDONLY);
  if (fd == -1)
    exit(84);
  else
    {
      buf[32] = '\0';
      read(fd, buf, 31);
    }
  return (buf[2] - 'A');
}

int	read_cord_3_enemy(char **av)
{
  int	fd;
  char	buf[32];

  fd = open(av[2], O_RDONLY);
  if (fd == -1)
    exit(84);
  else
    {
      buf[32] = '\0';
      read(fd, buf, 31);
    }
  return (buf[10] - 'A');
}

int	read_cord_4_enemy(char **av)
{
  int	fd;
  char	buf[32];

  fd = open(av[2], O_RDONLY);
  if (fd == -1)
    exit(84);
  else
    {
      buf[32] = '\0';
      read(fd, buf, 31);
    }
  return (buf[18] - 'A');
}

int	read_cord_5_enemy(char **av)
{
  int	fd;
  char	buf[32];

  fd = open(av[2], O_RDONLY);
  if (fd == -1)
    exit(84);
  else
    {
      buf[32] = '\0';
      read(fd, buf, 31);
    }
  return (buf[26] - 'A');
}
