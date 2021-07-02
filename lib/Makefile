##
## Makefile for Makefile in /home/Starkiller/PSU_2016_navy/lib
## 
## Made by Benoit Bouton
## Login   <Starkiller@epitech.net>
## 
## Started on  Thu Feb 16 16:17:58 2017 Benoit Bouton
## Last update Thu Feb 16 16:23:14 2017 Benoit Bouton
##

SRC	=	my_atoi.c		\
		my_printf.c		\
		my_putchar.c		\
		my_putnbr_base.c	\
		my_put_nbr.c		\
		my_putstr.c		\
		my_strcmp.c		\
		my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME)	$(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:		fclean all
