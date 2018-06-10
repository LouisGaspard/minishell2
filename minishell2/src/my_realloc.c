/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** realloc env
*/

#include "minishell2.h"
#include "my.h"

char    **realloc_my_env(char **env, char *var, char *str)
{
	int     nb_line = count_tab_line(env);
	int     y = 0;
	char    **tab = malloc(sizeof(char *) * (nb_line + 2));

	if (tab == NULL)
		return (NULL);
	while (env[y]) {
		tab[y] = my_strdup(env[y]);
		y++;
	}
	if (str == NULL)
		tab[y] = my_strdup(var);
	else
		tab[y] = my_strcat(var, str);
	tab[y + 1] = NULL;
	//free_tab(env);
	return (tab);
}
