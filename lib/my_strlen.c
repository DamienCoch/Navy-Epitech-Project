/*
** my_strlen.c for my_strlen in /home/Starkiller/CPool_Day04
** 
** Made by Bouton Benoit
** Login   <Starkiller@epitech.net>
** 
** Started on  Thu Oct  6 16:41:47 2016 Bouton Benoit
** Last update Thu Oct 27 14:58:15 2016 Bouton Benoit
*/

int	 my_strlen(char *str)
{
  int len;

  len = 0;
  while (str[len] != '\0')
    {
      len = len + 1;
    }
  return (len);
}
