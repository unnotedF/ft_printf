/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:11:58 by flucas-d          #+#    #+#             */
/*   Updated: 2023/08/30 21:22:46 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

#include "libft.h"
/*
static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
*/
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char *str = "Hello, world!";
	int fd = 1; // Use 1 for standard output (stdout)

	ft_putendl_fd(str, fd);
	return (0);
}
*/
