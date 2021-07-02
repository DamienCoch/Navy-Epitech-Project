/*
** parsing1.c for parsing1 in /home/Starkiller/PSU_2016_navy/ben
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Wed Feb  1 20:25:40 2017 Benoit Bouton
** Last update Thu Feb 16 17:32:42 2017 Benoit Bouton
*/

#include "main.h"

int	read_2(char **av)
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
  return (buf[3] - '0');
}

int	read_3(char **av)
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
  return (buf[11] - '0');
}

int	read_4(char **av)
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
  return (buf[19] - '0');
}

int	read_5(char **av)
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
  return (buf[27] - '0');
}
