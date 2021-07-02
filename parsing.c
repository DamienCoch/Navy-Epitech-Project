/*
** parsing.c for parsing in /home/Starkiller/PSU_2016_navy/ben
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Wed Feb  1 14:44:36 2017 Benoit Bouton
** Last update Thu Feb 16 17:39:16 2017 Benoit Bouton
*/

#include "main.h"

int	read_cord_2(char **av)
{
  int	fd;
  char	buf[32];

  fd = open(av[1], O_RDONLY);
  if (fd == -1)
    exit(84);
  else
    {
      buf[32] = '\0';
      read(fd, buf, 31);
    }
  return (buf[2] - 'A');
}

int	read_cord_3(char **av)
{
  int	fd;
  char	buf[32];

  fd = open(av[1], O_RDONLY);
  if (fd == -1)
    exit(84);
  else
    {
      buf[32] = '\0';
      read(fd, buf, 31);
    }
  return (buf[10] - 'A');
}

int	read_cord_4(char **av)
{
  int	fd;
  char	buf[32];

  fd = open(av[1], O_RDONLY);
  if (fd == -1)
    exit(84);
  else
    {
      buf[32] = '\0';
      read(fd, buf, 31);
    }
  return (buf[18] - 'A');
}

int	read_cord_5(char **av)
{
  int	fd;
  char	buf[32];

  fd = open(av[1], O_RDONLY);
  if (fd == -1)
    exit(84);
  else
    {
      buf[32] = '\0';
      read(fd, buf, 31);
    }
  return (buf[26] - 'A');
}
