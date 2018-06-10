/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** init struct
*/

#include "minishell2.h"

t_shell	init_struct(t_shell shell, char **env)
{
	shell.env = my_copy_tab(env);
	shell.builtins = init_built_tab();
	init_built_functions(shell.builtins_functions);
	shell.r_value = 0;
	return (shell);
}
