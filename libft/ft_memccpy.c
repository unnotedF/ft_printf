/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:37:52 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/26 08:08:36 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies bytes from string s2 to s1.
// returns a pointer to the byte after 'c' in the s1 (if 'c' occours)
// otherwise, n bytes are copied, and a NULL pointer is returned.

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if ((unsigned char)c == ((unsigned char *)src)[i])
			return (dst + i + 1);
		i++;
	}
	return (0);
}
