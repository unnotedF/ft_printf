/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:30:18 by flucas-d          #+#    #+#             */
/*   Updated: 2023/08/30 22:03:29 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

/*
static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}
/*
int	main(void)
{
	int	fd;

	fd = 1;
	ft_putnbr_fd(12345, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-6789, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(0, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(987654321, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-987654321, fd);
	ft_putchar_fd('\n', fd);
	return (0);
}
*/