/*
** my_putnbr_base.c for my_putnbr_base in /home/Starkiller/CPool_Day06
** 
** Made by Bouton Benoit
** Login   <Starkiller@epitech.net>
** 
** Started on  Tue Oct 11 11:35:10 2016 Bouton Benoit
** Last update Tue Nov 15 14:54:49 2016 Bouton Benoit
*/

int	my_putnbrbase(int nbr, char *base)
{
  int	mod;
  int	start;
  int	size;
  int	nb;

  nb = 0;
  size = my_strlen(base);
  if (nbr < 0)
    {
      nb += my_putchar('-');
      nb += my_putnbrbase(-nbr, base);
    }
  else
    {
      mod = nbr % size;
      start = (nbr - mod) / size;
      if (start != 0)
	my_putnbrbase(start, base);
      nb = my_putchar(base[mod]);
    }
  return (nb);
}
