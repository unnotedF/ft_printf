/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:30:59 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/06 14:38:48 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if (dstsize == 0)
		return (lensrc);
	lendst = ft_strlen (dst);
	if (lendst >= dstsize)
		return (lensrc + dstsize);
	dst = dst + lendst;
	dstsize = dstsize - lendst;
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (lendst + lensrc);
}
