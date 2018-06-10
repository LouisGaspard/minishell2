/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** built_cmd check
*/

#include "minishell2.h"
#include "my.h"

int	get_builtins_nb(t_shell *shell, char **tab)
{
	for (int a = 0; shell->builtins[a]; a++) {
		if (my_strcmp(tab[0], shell->builtins[a]) == 0)
			return (a);
	}
	return (-1);
}

int	check_if_builtins(t_shell *shell, char **tab)
{
	char	**arg = my_str_to_word_array(tab[0], ' ');
	int	nb_cmd = get_builtins_nb(shell, arg);

	if (nb_cmd == -1)
		return (0);
	(*shell->builtins_functions[nb_cmd])(shell, arg);
	return (1);
}
