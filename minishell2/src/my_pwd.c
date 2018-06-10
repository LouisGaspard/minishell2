/*
** EPITECH PROJECT, 2018
** shell2
** File description:
** update pwd
*/

#include "minishell2.h"
#include "my.h"

void    old_pwd(t_shell *sh)
{
	char    *old;
	char    **maj = malloc(sizeof(char *) * 4);
	int     i = 0;

	if (!maj)
		return;
	while (sh->env[i] && my_strncmp(sh->env[i], "PWD=", 4) != 0)
		i++;
	if (sh->env[i] && my_strncmp(sh->env[i], "PWD=", 4) == 0)
		old = my_strdup(sh->env[i] + 4);
	maj[0] = my_strdup("setenv");
	maj[1] = my_strdup("OLDPWD");
	maj[2] = my_strdup(old);
	maj[3] = NULL;
	my_setenv(sh, maj);
	//free_tab(maj);
	free(old);
}

void    maj_pwd(t_shell *sh)
{
	int     i = 0;
	char    **maj = malloc(sizeof(char *) * 4);
	char    pwd[1024];

	getcwd(pwd, sizeof(pwd));
	maj[0] = my_strdup("setenv");
	maj[1] = my_strdup("PWD");
	maj[2] = my_strdup(pwd);
	maj[3] = NULL;
	while (sh->env[i] && my_strncmp(sh->env[i], "PWD=", 4) != 0)
		i++;
	if (sh->env[i] && my_strncmp(sh->env[i], "PWD=", 4) == 0)
		my_setenv(sh, maj);
	//free_tab(maj);
}
