/*
** my_strcmp.c for my_strcmp in /home/Starkiller/CPool_Day06
** 
** Made by Bouton Benoit
** Login   <Starkiller@epitech.net>
** 
** Started on  Mon Oct 10 18:41:38 2016 Bouton Benoit
** Last update Thu Jan 19 22:43:54 2017 Bouton Benoit
*/

int	my_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
    {
      i++;
    }
  return (s1[i] - s2[i]);
}
