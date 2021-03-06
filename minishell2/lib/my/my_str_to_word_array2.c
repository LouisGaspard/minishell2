/*
** EPITECH PROJECT, 2017
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include "my.h"

int	count_word_len2(char const *str)
{
	int	a = 0;

	while ((my_is_alphanum2(str[a]) == 0) && str[a] != '\0')
		a++;
	return (a);
}

int	how_many_words2(char const *str)
{
	int	a = 0;
	int	result = 0;

	while (str[a]) {
		while (my_is_alphanum2(str[a]) == 1 && str[a] != '\0') {
			a++;
		}
		while (my_is_alphanum2(str[a]) == 0 && str[a] != '\0') {
			a++;
		}
		result++;
	}
	if (my_is_alphanum2(str[a - 1]) == 1)
		result--;
	return (result);
}

int	str_to_array_loop2(char const *str, int i, int j, char **tab)
{
	int	a = 0;

	while ((my_is_alphanum2(str[i]) == 1) && str[i] != '\0')
		i++;
	tab[j] = malloc(sizeof(**tab) * (count_word_len2(&str[i]) + 1));
	if (tab[j] == NULL) {
		return (-1);
	}
	while ((my_is_alphanum2(str[i]) == 0) && str[i] != '\0') {
		tab[j][a] = str[i];
		i++;
		a++;
	}
	tab[j][a] = '\0';
	return (i);
}

char	**my_str_to_word_array2(char const *str)
{
	int	a = 0;
	int	b = 0;
	char	**tab;

	tab = malloc(sizeof(*tab) * (how_many_words2(str) + 1));
	if (tab == NULL) {
		return (NULL);
	}
	while (a < how_many_words2(str)) {
		b = str_to_array_loop2(str, b, a, tab);
		if (b == -1) {
			return (NULL);
		}
		a++;
	}
	tab[a] = NULL;
	return (tab);
}
