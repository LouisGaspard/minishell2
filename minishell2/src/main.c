/*
** EPITECH PROJECT, 2018
** minishell2
** File description:
** main
*/

#include "minishell2.h"
#include "my.h"

int	main(int ac, char **av, char **env)
{
	t_shell	shell;

	(void)ac;
	(void)av;
	shell = init_struct(shell, env);
	my_shell(&shell);
	return (shell.r_value);
}
