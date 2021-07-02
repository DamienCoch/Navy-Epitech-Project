/*
** my_atoi.c for my_atoi in /home/Starkiller/CPE_2016_BSQ
** 
** Made by Bouton Benoit
** Login   <Starkiller@epitech.net>
** 
** Started on  Sat Dec 10 16:16:06 2016 Bouton Benoit
** Last update Thu Feb 16 16:21:08 2017 Benoit Bouton
*/

int	my_atoi(char *str)
{
  int	res;
  int	i;

  i = 0;
  res = 0;
  while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
    {
      res = res + (str[i] - 48);
      res = res * 10;
      (i)++;
    }
  (i)++;
  res = res / 10;
  return (res);
}
