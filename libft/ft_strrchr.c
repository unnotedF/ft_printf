/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:29:40 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/11 15:03:09 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	str_len;

	str_len = ft_strlen(s);
	while (str_len >= 0)
	{
		if (s[str_len] == (char)c)
			return (&((char *)s)[str_len]);
		str_len--;
	}
	if (!(char)c)
		return (&((char *)s)[str_len]);
	return (NULL);
}
/*
int	main()
{
	char	str[] = "procurando Nemo";
	printf("%s\n", ft_strrchr(str, 'N'));
	return (0);
}
*/