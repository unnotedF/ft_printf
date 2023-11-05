/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:04:47 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/26 08:16:24 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of 'c' in the string pointed to by s

// #include <stdio.h>

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
/*
int	main()
{
	char	str[] = "procurando Nemo";
	printf("%s\n", ft_strchr(str, 'N'));
	return (0);
}*/
