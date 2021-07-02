/*
** my_put_nbr.c for my_put_nbr in /home/Starkiller/CPool_Day03
** 
** Made by Bouton Benoit
** Login   <Starkiller@epitech.net>
** 
** Started on  Thu Oct  6 17:20:26 2016 Bouton Benoit
** Last update Sun Oct  9 16:52:01 2016 Bouton Benoit
*/

int	 my_put_nbr(int nb)
{
  int mod;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 0)
    {
      if (nb >= 10)
	{
	  mod = (nb % 10);
	  nb = (nb - mod) / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + mod);
	}
      else
	my_putchar(48 + nb % 10);
    }
}
