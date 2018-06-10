/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** copy tab
*/

#include "minishell2.h"
#include "my.h"

char	**my_copy_tab(char **tab)
{
	int	a = 0;
	int	nb_line = count_tab_line(tab);
	char	**new_tab = malloc(sizeof(char *) * (nb_line + 1));

	if (new_tab == NULL)
		return (NULL);
	for (; a != nb_line; a++)
		new_tab[a] = tab[a];
	new_tab[a] = NULL;
	return (new_tab);
}
