/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:26:48 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/11 15:19:22 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sublen;

	sublen = 0;
	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
		s += start;
	else
		s += ft_strlen(s);
	while (*s++ && len--)
		sublen++;
	s = s - sublen - 1;
	substr = ft_calloc(sublen + 1, sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s, sublen + 1);
	return (substr);
}
/*
int main() 
{
    char input[] = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *substring = ft_substr(input, start, len);
	
    if (substring)
	{
        printf("Substring: %s\n", substring);
        free(substring); //liberar a memória alocada
    } 
	else 
        printf("Erro ao criar a substring\n");
    return 0;
}
*/