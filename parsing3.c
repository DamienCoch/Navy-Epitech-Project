/*
** parsing3.c for parsing3 in /home/Starkiller/PSU_2016_navy/ben
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Thu Feb  2 13:48:32 2017 Benoit Bouton
** Last update Thu Feb 16 17:37:12 2017 Benoit Bouton
*/

#include "main.h"

int	read_cord_2_end(char **av)
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
  return (buf[5] - 'A');
}

int	read_cord_3_end(char **av)
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
  return (buf[13] - 'A');
}

int	read_cord_4_end(char **av)
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
  return (buf[21] - 'A');
}

int	read_cord_5_end(char **av)
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
  return (buf[29] - 'A');
}
