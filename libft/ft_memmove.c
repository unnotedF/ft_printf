/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:40:51 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/26 08:11:55 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies n bytes from string s2 to string s1

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		}
	}
	else if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void) 
{
	char	str[] = "";

	ft_memmove(str + 2, str + 7, 5);
	printf("Result: %s\n", str);
	ft_memmove(str + 2, str + 7, 5);
	printf("Result: %s\n", str);
	return (0);
}
*/