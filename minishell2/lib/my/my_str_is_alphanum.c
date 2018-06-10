/*
** EPITECH PROJECT, 2018
** my
** File description:
** my
*/

#include "my.h"

int     my_is_alphanum(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9') || c == '.'
		|| c == '_')
		return (0);
	else
		return (1);
	return (0);
}

int	my_str_is_alphanum(char *str)
{
	int	a = 0;

	while (str[a]) {
		if (my_is_alphanum(str[a]) == 1)
			return (1);
		a++;
	}
	return (0);
}
