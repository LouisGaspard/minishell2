/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** built tab
*/

#include "minishell2.h"
#include "my.h"

char	**init_built_tab(void)
{
	char	**tab = malloc(sizeof(char *) * (5 + 1));

	if (tab == NULL)
		return (NULL);
	tab[0] = my_strdup("cd");
	tab[1] = my_strdup("setenv");
	tab[2] = my_strdup("unsetenv");
	tab[3] = my_strdup("env");
	tab[4] = my_strdup("exit");
	tab[5] = NULL;
	return (tab);
}
