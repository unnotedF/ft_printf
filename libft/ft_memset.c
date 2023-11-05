/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:44:14 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/26 08:12:49 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// writes n bytes of 'c' to the string 's'.

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
int main() 
{
    char str[20] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    
    ft_memset(str, '*', 5);  // Preenche os primeiros 5 bytes com '*'
    
    printf("Modified string: %s\n", str);
    
    return 0;
}*/