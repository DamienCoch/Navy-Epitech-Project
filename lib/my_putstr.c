/*
** my_putstr.c for my_putstr in /home/Starkiller/CPool_Day04
** 
** Made by Bouton Benoit
** Login   <Starkiller@epitech.net>
** 
** Started on  Thu Oct  6 14:10:45 2016 Bouton Benoit
** Last update Tue Oct 18 13:21:41 2016 Bouton Benoit
*/

int	 my_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
