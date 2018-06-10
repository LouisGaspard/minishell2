/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** shell loop
*/

#include "minishell2.h"
#include "get_next_line.h"
#include "my.h"

void	parse_pipe(t_shell *shell, char **tab)
{
	(void)shell;
	(void)tab;
}

void	exec_cmd(t_shell *shell, char **tab)
{
	if (check_if_builtins(shell, tab) == 1)
		return;
}

void	parse_tab(t_shell *shell, char **tab)
{
	char	**tab_pipe = NULL;

	for (int a = 0; tab[a]; a++) {
		tab_pipe = my_str_to_word_array(tab[a], '|');
		if (count_tab_line(tab_pipe) > 1)
			parse_pipe(shell, tab_pipe);
		else
			exec_cmd(shell, tab_pipe);
	}
}

void	my_shell(t_shell *shell)
{
	char	*str;
	char	**tab = NULL;

	my_printf("$> ");
	while ((str = get_next_line(0))) {
		tab = my_str_to_word_array(str, ';');
		parse_tab(shell, tab);
		free(str);
		my_printf("$> ");
	}
}
