/*
** main.h for main in /home/Starkiller/PSU_2016_navy
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Tue Jan 31 17:01:08 2017 Benoit Bouton
** Last update Mon Feb 20 01:47:04 2017 Benoit Bouton
*/

#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

typedef struct	s_cord
{
  int	x_start;
  int	y_start;
  int	x_end;
  int	y_end;
}t_cord;

/*convert_int_to_char*/
char	convert_int_to_char(int x);
char	convert_int_to_char_p1(int x);

/*modifmap.c*/
int	shooting(int i);
char	**modifmap(char *s, int shoot, char **map);
char	**modifmap2(int x, int y, char **map);

/*gotsig.c*/
void	hit(int mysignal);
void	missed(int mysignal);
int	hit1(int x);
int	sendsig(char *s, int player1_pid);
char	**gotsig(char **map, int z, int player_pid);

/*libmy.a*/
int	my_strcmp(char *s1, char *s2);
int	my_atoi(char *str);
void	my_putstr(char *str);
void	my_putchar(char c);

/*turn.c*/
int	stop(int x);
void	sigcapt(int mysignal);
void	sigcapt2(int mysignal);
void	turn_p2(char **str, char **str2, int player1_pid);

/*connexion.c*/
void	myhandle(int mtsignal, siginfo_t *siginfo, void *context);
int	connexion(int ac, char **av);

/*my_strlen.c*/
int	my_strlen(char *str);

/*my_getnbr_base.c*/
int	my_putnbr_base(int nbr, char *base);

/*send_pid.c*/
int	send_pid(int enemy_pid);

/*libgnl.a*/
char	*get_next_line(const int fd);

/*main.c*/
void	sendshoot(int player_pid);
void	siggot(int mysignal);
void	usage();
void	turn(char **str, char **str2, int x_pid);

/*read.c*/
char	read_boat_2(char **av);
char	read_boat_3(char **av);
char	read_boat_4(char **av);
char	read_boat_5(char **av);

/*navy.c*/
void	navy(int x);
char	**map();
void	print(char **str, char **str2);
char	**mdrpasbo(char **av);

/*libmy.a*/
int	my_printf(const char *s, ...);

/*parsing.c*/
int	read_cord_2(char **av);
int	read_cord_3(char **av);
int	read_cord_4(char **av);
int	read_cord_5(char **av);

/*parsing1.c*/
int	read_2(char **av);
int	read_3(char **av);
int	read_4(char **av);
int	read_5(char **av);

/*position.c*/
char	**placement_boat_2(char **str2, char **av);
char	**placement_boat_3(char **str2, char **av);
char	**placement_boat_5(char **str2, char **av);
char	**placement_boat_4(char **str2, char **av);

/*parsing2.c*/
int	read_2_end(char **av);
int	read_3_end(char **av);
int	read_4_end(char **av);
int	read_5_end(char **av);

/*parsing3.c*/
int	read_cord_2_end(char **av);
int	read_cord_3_end(char **av);
int	read_cord_4_end(char **av);
int	read_cord_5_end(char **av);

/*navy1.c*/
void	navy_enemy(int player1_pid, char **av);
char	**map_enemy();
void	print_enemy();

/*parsing1_enemy.c*/
int	read_2_enemy(char **av);
int	read_3_enemy(char **av);
int	read_4_enemy(char **av);
int	read_5_enemy(char **av);

/*parsing2_enemy.c*/
int	read_2_end_enemy(char **av);
int	read_3_end_enemy(char **av);
int	read_4_end_enemy(char **av);
int	read_5_end_enemy(char **av);

/*parsing3_enemy.c*/
int	read_cord_2_end_enemy(char **av);
int	read_cord_3_end_enemy(char **av);
int	read_cord_4_end_enemy(char **av);
int	read_cord_5_end_enemy(char **av);

/*parsing_enemy.c*/
int	read_cord_2_enemy(char **av);
int	read_cord_3_enemy(char **av);
int	read_cord_4_enemy(char **av);
int	read_cord_5_enemy(char **av);

/*position_enemy.c*/
char	**placement_boat_2_enemy(char **str2, char **av);
char	**placement_boat_3_enemy(char **str2, char **av);
char	**placement_boat_4_enemy(char **str2, char **av);
char	**placement_boat_5_enemy(char **str2, char **av);

/*read_enemy*/
char	read_boat_2_enemy(char **av);
char	read_boat_3_enemy(char **av);
char	read_boat_4_enemy(char **av);
char	read_boat_5_enemy(char **av);

/*main.c*/
void	handle();

#endif /*MAIN_H_*/
