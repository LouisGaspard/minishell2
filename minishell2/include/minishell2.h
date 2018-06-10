/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** minishell
*/

#ifndef	__MINISHELL_2__
#define	__MINISHELL_2__

#define ERR_ACCESS	": No such file or directory.\n"
#define ERR_DIR		": Not a directory.\n"
#define ERR_HOME	": No home directory.\n"
#define ERR_FEW_ARG	": Too few arguments.\n"
#define ERR_NOT_FOUND	": Command not found.\n"
#define ERR_PERM	": Permission denied.\n"
#define ERR_EXIT	": Expression Syntax.\n"
#define ERR_SETENV_CHAR	": Variable name must contain alphanumeric"
#define ERR_SET		" characters.\n"
#define ERR_SETENV_ARG	": Too many arguments.\n"
#define ERR_SETENV_NAME	": Variable name must begin with a letter.\n"
#define ERR_SEG		"Segmentation fault"
#define ERR_FLOAT	"Floating exception"

typedef struct
{
	char	**builtins;
	char	**env;
	int	(*builtins_functions[6])();
	int	r_value;
} t_shell;

void	init_built_functions(int (**tab)());
void	my_shell(t_shell *shell);
void	old_pwd(t_shell *shell);
void	maj_pwd(t_shell *shell);
t_shell	init_struct(t_shell shell, char **env);
int	my_cd(t_shell *shell, char **arg);
int	my_setenv(t_shell *shell, char **arg);
int	my_unsetenv(t_shell *shell, char **arg);
int	my_env(t_shell *shell, char **arg);
int	my_exit(t_shell *shell, char **arg);
int	count_tab_line(char **tab);
int	check_if_builtins(t_shell *shell, char **tab);
char	**my_copy_tab(char **tab);
char	**init_built_tab(void);
char	**realloc_my_env(char **env, char *var, char *str);

#endif
