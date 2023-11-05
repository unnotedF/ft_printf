/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@student.42Lis    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:45:32 by flucas-d          #+#    #+#             */
/*   Updated: 2023/11/02 19:48:47 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	count;

	count = 0;
	if (!s)
		count += ft_putstr_fd("(null)", 1);
	else
		count += ft_putstr_fd(s, 1);
	return (count);
}

int	ft_putbase(unsigned long int n, char *base, int count)
{
	int		len;

	len = ft_strlen(base);
	if (n >= (unsigned long int)len)
	{
		count += ft_putbase(n / len, base, count);
	}
	count += write(1, &base[n % len], 1);
	return (count);
}

int	ft_print_point(unsigned long int p)
{
	int	count;

	count = 0;
	if (!p)
		count += ft_putstr_fd("(nil)", 1);
	else
	{
		count += write(1, "0x", 2);
		count += ft_putbase(p, LOW_HEX, 0);
	}
	return (count);
}

int	ft_print_num(long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		write (1, "-", 1);
		count += ft_putbase((n * -1), DEC, count);
	}
	else
		count += ft_putbase(n, DEC, count);
	return (count);
}
