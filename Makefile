##
## Makefile for Makefile in /home/Starkiller/test
## 
## Made by Bouton Benoit
## Login   <Starkiller@epitech.net>
## 
## Started on  Sun Jan 15 19:23:41 2017 Bouton Benoit
## Last update Sun Feb 19 17:57:07 2017 Benoit Bouton
##

SRC	=	main.c 			\
		read.c			\
		navy.c			\
		parsing.c		\
		parsing1.c		\
		parsing2.c		\
		parsing3.c		\
		position.c		\
		read_enemy.c		\
		navy1.c			\
		parsing_enemy.c		\
		parsing1_enemy.c	\
		parsing2_enemy.c	\
		parsing3_enemy.c	\
		position_enemy.c	\
		turn.c			\
		connexion.c		\
		modifmap.c		\
		gotsig.c		\
		convert_int_to_char.c

CFLAGS	+=	-Wextra -Wall -Werror

OBJ	=	$(SRC:.c=.o)

NAME	=	navy

all:		$(NAME)

$(NAME):		$(OBJ)
	gcc -o $(NAME)	$(OBJ) -L. -lmy -lgnl

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

reclean:
	rm -f $(OBJ)

re:		fclean all

ez:		fclean all reclean
