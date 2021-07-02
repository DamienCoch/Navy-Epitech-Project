/*
** my_printf.c for my_printf in /home/Starkiller/PSU_2016_my_printf
** 
** Made by Bouton Benoit
** Login   <Starkiller@epitech.net>
** 
** Started on  Sat Nov 12 12:58:58 2016 Bouton Benoit
** Last update Sat Nov 26 16:45:28 2016 Bouton Benoit
*/

#include <stdarg.h>

int	my_printf(const char *s, ...)
{
  va_list	args;
  int	i;

  va_start(args, s);
  i = 0;
  while (s[i] != '\0')
    {
      if (s[i] == '%')
	{
	  if (s[i + 1] == 'd' || s[i + 1] == 'i')
	    my_put_nbr(va_arg(args, int));
	  else if (s[i + 1] == 's')
	    my_putstr(va_arg(args, char *));
	  else if (s[i + 1] == 'c')
	    my_putchar((char)va_arg(args, int));
	  else if (s[i + 1] == 'b' )
	    my_putnbrbase(va_arg(args, int), "01");
	  else if (s[i + 1] == 'o')
	    my_putnbrbase(va_arg(args, int), "01234567");
	  else if (s[i + 1] == 'x')
	    my_putnbrbase(va_arg(args, int), "0123456789abcdef");
	  else if (s[i + 1] == 'X')
	    my_putnbrbase(va_arg(args, int), "0123456789ABCDEF");
	  else if (s[i + 1] == '%')
	    my_putchar('%');
	  else if (s[i + 1] == 'p')
	    {
	      my_putstr("0x");
	      my_putnbrbase(va_arg(args, int), "0123456789abcdef");
	    }
	  else
	    my_putchar(s[i + 1]);
	  i++;
	}
      else
	my_putchar(s[i]);
      i++;
    }
  va_end(args);
}
