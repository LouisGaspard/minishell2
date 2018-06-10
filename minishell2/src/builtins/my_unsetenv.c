/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** my_unsetenv
*/

#include "minishell2.h"
#include "my.h"

int	loop_unsetenv(t_shell *sh, char *var, int i)
{
	for (i = 0; sh->env[i]; i++) {
		if (my_strncmp(var, sh->env[i], my_strlen(var)) == 0) {
			free(sh->env[i]);
			break;
		}
	}
	return (i);
}

int	my_unsetenv(t_shell *sh, char **command)
{
	int     i = 0;
	char    *var = my_strcat(command[1], "=");
	int     max = count_tab_line(sh->env);

	i = loop_unsetenv(sh, var, i);
	if (i == max)
		sh->env[i] = NULL;
	else {
		while (sh->env[i + 1]) {
			sh->env[i] = my_strdup(sh->env[i + 1]);
			free(sh->env[i + 1]);
			i++;
		}
	}
	sh->env[i] = NULL;
	free(var);
	return (0);
}
