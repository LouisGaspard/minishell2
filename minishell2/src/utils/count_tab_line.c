/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** count tab line
*/

#include "minishell2.h"
#include "my.h"

int	count_tab_line(char **tab)
{
	int	line = 0;

	for (; tab[line]; line++);
	return (line);
}
