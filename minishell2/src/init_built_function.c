/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** init tab function
*/

#include "minishell2.h"

void	init_built_functions(int (**built_function)())
{
	built_function[0] = my_cd;
	built_function[1] = my_setenv;
	built_function[2] = my_unsetenv;
	built_function[3] = my_env;
	built_function[4] = my_exit;
	built_function[5] = 0;
}
