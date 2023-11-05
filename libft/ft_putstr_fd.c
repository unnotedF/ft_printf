/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:04:51 by flucas-d          #+#    #+#             */
/*   Updated: 2023/11/02 07:40:21 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}*/
#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}
/*
	int	main(void)
{
	int	fd = 1; // Use 1 for standard output (stdout)

	ft_putstr_fd("42, ", fd);
	ft_putstr_fd("Common Core!", fd);
	ft_putstr_fd("\n", fd);
	return (0);
}*/