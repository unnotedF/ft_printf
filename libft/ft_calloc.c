/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:57:53 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/26 08:17:26 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocates enough space for count objects that are
// size bytes of memory each and returns a pointer to the 
// allocated memory

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;

	if (size > 0 && count > SIZE_MAX / size)
		return (NULL);
	dst = malloc(count * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, count * size);
	return (dst);
}
