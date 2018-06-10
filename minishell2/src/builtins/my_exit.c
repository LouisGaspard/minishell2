/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** my_exit
*/

#include "minishell2.h"
#include "my.h"

int	my_exit(t_shell *shell, char **command)
{
	int     exit_value = 0;

	if (command[1] != NULL) {
		if (my_str_isnum(command[1]) == 1)
			exit_value = my_getnbr(command[1]);
		else {
			fprintf(stderr, "%s%s", command[0], ERR_EXIT);
			shell->r_value = 1;
			return (0);
		}
	}
	exit(exit_value);
}
