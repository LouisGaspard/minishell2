/*
** EPITECH PROJECT, 2017
** tests_get_input
** File description:
** tests_get_input
*/

#include "minishell2.h"
#include "my.h"
#include <criterion/criterion.h>

Test(is_delim, check_is_delim)
{
	cr_assert(is_delim("toto", 2, 'o') == 1);
	cr_assert(is_delim("toto", 3, 'o') == 0);
	cr_assert(is_delim("ls -l", 3, ' ') == 1);
	cr_assert(is_delim("ls -l", 4, ' ') == 0);
}

Test(remove_space, check_remove_space)
{
	cr_assert(my_strcmp(remove_space("toto tata"), "toto tata") == 0);
	cr_assert(my_strcmp(remove_space(" toto"), "toto") == 0);
	cr_assert(my_strcmp(remove_space("toto  tata"), "toto tata") == 0);
	cr_assert(my_strcmp(remove_space("toto tata "), "toto tata") == 0);
}

Test(remove_tab, check_remove_tab)
{
	char	*str = my_strdup("toto tata");

	cr_assert(my_strcmp(remove_tab(str), "toto tata") == 0);
	str[4] = 9;
	cr_assert(my_strcmp(remove_tab(str), "toto tata") == 0);
}

Test(epur_str, check_epur_str)
{
	char	*str = "toto tata";

	cr_assert(my_strcmp(epur_str(str, ' '), "toto tata") == 0);
	str = my_strdup("ls  -l   .");
	cr_assert(my_strcmp(epur_str(str, ' '), "ls -l .") == 0);
	str[2] = 9;
	cr_assert(my_strcmp(epur_str(str, ' '), "ls -l .") == 0);
}
