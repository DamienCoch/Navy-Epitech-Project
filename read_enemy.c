/*
** read.c for read in /home/Starkiller/test
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Wed Feb  1 11:39:25 2017 Benoit Bouton
** Last update Thu Feb 16 17:46:49 2017 Benoit Bouton
*/

#include "main.h"

char	read_boat_2_enemy(char **av)
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
  return (buf[0]);
}

char	read_boat_3_enemy(char **av)
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
  return (buf[8]);
}

char	read_boat_4_enemy(char **av)
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
  return (buf[16]);
}

char	read_boat_5_enemy(char **av)
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
  return (buf[24]);
}
