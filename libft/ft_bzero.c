/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:32:35 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/26 08:04:15 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this function writes n zeroed bytes to the string s

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int main() 
{
    char str[] = "Hello, World!";
    
    printf("Before ft_bzero: %s\n", str);
    
    ft_bzero(str, sizeof(str));
    
    printf("After ft_bzero: %s\n", str);
    
    return 0;
}*/