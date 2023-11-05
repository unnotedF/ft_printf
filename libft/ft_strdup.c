/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:36:01 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/04 14:00:55 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

#include "libft.h"
/*
char	*ft_strdup(const char *s1)
{
	char	*pds;
	int		i;
	size_t	len;

	len = 0;
	while (s1[len])
		len++;
	pds = (char *)malloc(sizeof(char) * (len + 1));
	if (!pds)
		return (0);
	i = 0;
	while (i < len)
	{
		pds[i] = s1 [i];
		i++;
	}
	return (pds);
}
*/
char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
/*
int	main(void)
{
	char	str1[] = "Teste dup";
	char	*str2;

	str2 = ft_strdup(str1);
	printf("%s\n", str2);
	free (str2);
	return (0);
}
*/