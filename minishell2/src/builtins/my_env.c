/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** my_env
*/

#include "minishell2.h"
#include "my.h"

int	my_env(t_shell *shell, char **command)
{
	(void)command;
	for (int a = 0; shell->env[a]; a++)
		my_printf("%s\n", shell->env[a]);
	return (0);
}
