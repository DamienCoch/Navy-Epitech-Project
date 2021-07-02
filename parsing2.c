/*
** parsing2.c for parsing2 in /home/Starkiller/PSU_2016_navy/ben
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Thu Feb  2 13:32:03 2017 Benoit Bouton
** Last update Thu Feb 16 17:34:47 2017 Benoit Bouton
*/

#include "main.h"

int	read_2_end(char **av)
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
  return (buf[6] - '0');
}

int	read_3_end(char **av)
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
  return (buf[14] - '0');
}

int	read_4_end(char **av)
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
  return (buf[22] - '0');
}

int	read_5_end(char **av)
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
  return (buf[30] - '0');
}
