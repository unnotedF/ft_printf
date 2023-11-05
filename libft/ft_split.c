/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 19:49:34 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/23 18:16:52 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>

#include "libft.h"

static void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**array;
	char const	*tmp;

	tmp = s;
	array = tab;
	while (*tmp)
	{
		while (*s == sep)
			s++;
		tmp = s;
		while (*tmp && *tmp != sep)
			tmp++;
		if (*tmp == sep || tmp > s)
		{
			*array = ft_substr(s, 0, tmp - s);
			s = tmp;
			array++;
		}
	}
	*array = NULL;
}

static int	ft_count_words(char const *s, char sep)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++count;
		while (*s && *s != sep)
			++s;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	ft_allocate(split, s, c);
	return (split);
}
/*
int	main(void)
{
	char	str[]= "Test ft_split for libft 42";
	char	**result = ft_split(str, ' ');
	int		i;

	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/