/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:31:16 by flucas-d          #+#    #+#             */
/*   Updated: 2023/11/02 07:37:47 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

#include "libft.h"

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
/*
int	main(void)
{
	char c = 'X';
	int	fd = 1;

	ft_putchar_fd(c, fd);
	return (0);
}
*/