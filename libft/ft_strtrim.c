/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:56:41 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/11 18:47:06 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tchar;
	size_t	len;
	size_t	beg;
	size_t	end;

	if (!s1)
		return (NULL);
	beg = 0;
	while (s1[beg] && is_in_set(s1[beg], set))
		beg++;
	if (s1[beg] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end > beg && is_in_set(s1[end], set))
		end--;
	len = end - beg + 1;
	tchar = (char *)malloc(len + 1);
	if (!tchar)
		return (NULL);
	ft_strlcpy(tchar, s1 + beg, len + 1);
	return (tchar);
}
