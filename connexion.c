/*
** connexion.c for connexion in /home/Starkiller/PSU_2016_navy/ben
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Mon Feb  6 16:36:01 2017 Benoit Bouton
** Last update Sun Feb 19 10:57:38 2017 Benoit Bouton
*/

#include "main.h"

int	x;

void	connecvalid(int mysignal)
{
  mysignal = mysignal;
}

void	verif(int mysignal)
{
  mysignal = mysignal;
}

void	myhandle(int mysignal, siginfo_t *siginfo, void *context)
{
  context = context;
  mysignal = mysignal;
  x = (long)siginfo->si_pid;
}

int	connexion(int ac, char **av)
{
  pid_t	pid;
  pid_t	player1_pid;
  char	**ok;

  struct sigaction	*act;
  struct sigaction	act1;

  pid = getpid();
  act = malloc(sizeof(struct sigaction));
  act->sa_handler = &navy;

  if (ac == 3)
    {
      my_printf("my_pid : %d\n", (int)pid);
      player1_pid = my_atoi(av[1]);
      signal(SIGUSR1, connecvalid);
      kill(player1_pid, SIGUSR1);
      pause();
      navy_enemy(player1_pid, av);
    }
  if (ac == 2)
    {
      if (my_strcmp(av[1], "-h") == 0)
	usage();
      my_printf("my_pid : %d\n", (int)pid);
      my_printf("waiting for enemy connexion...\n");
      act1.sa_flags = SA_SIGINFO;
      act1.sa_sigaction = &myhandle;
      sigaction(SIGUSR1, &act1, NULL);
      pause();
      usleep(10);
      kill(x, SIGUSR1);
      ok = mdrpasbo(av);
      ok = ok;
      navy(x);
    }
  return (0);
}
