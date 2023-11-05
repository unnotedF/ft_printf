/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@student.42Lis    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:44:51 by flucas-d          #+#    #+#             */
/*   Updated: 2023/11/04 20:13:12 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_flag(char *flag, char c)
{
	int		i;

	i = 0;
	while (flag[i])
	{
		if (flag[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	print_format(char *s, int *i, va_list args)
{
	int	count;

	count = 0;
	if (s[*i] == 'c')
		count += ft_putchar_fd((va_arg(args, int)), 1);
	else if (s[*i] == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (s[*i] == 'p')
		count += ft_print_point((long unsigned int)va_arg(args, long));
	else if (s[*i] == 'd' || s[*i] == 'i')
		count += ft_print_num((int)va_arg(args, int));
	else if (s[*i] == 'u')
		count += ft_putbase((unsigned int)va_arg(args, unsigned int), DEC, 0);
	else if (s[*i] == 'x')
		count += ft_putbase((unsigned int)va_arg(args, long int), LOW_HEX, 0);
	else if (s[*i] == 'X')
		count += ft_putbase((unsigned int)va_arg(args, long int), UP_HEX, 0);
	else if (s[*i] == '%')
		count += ft_putchar_fd('%', 1);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list		args;
	int			count;
	int			i;

	va_start(args, s);
	if (!s)
		return (-1);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%' && check_flag(FLAGS, s[i + 1]))
		{
			i++;
			count += print_format((char *)s, &i, args);
		}
		else
			count += ft_putchar_fd(s[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
/*
int	main()
{
	int	i = -42;
	void *p = (int *)101010;
	char c = 'c';
	char s[] = "Stingrid";
	int x = 29082;
	int d = 24;
	unsigned int u = 20;
	int count1, count2;

	// c (Char)
	count1 = printf("Character :%c:\n", c);
	count2 = ft_printf("Character :%c:\n", c);
	printf("Original count: %d, My count: %d\n\n", count1, count2);

	// s (String)
	count1 = printf("String :%s:\n", s);
	count2 = ft_printf("String :%s:\n", s);
	printf("Original count: %d, My count: %d\n\n", count1, count2);

	// p (Pointer in Hexa)
	count1 = printf("Hexa Pointer :%p:\n", p);
	count2 = ft_printf("Hexa Pointer :%p:\n", p);
	printf("Original count: %d, My count: %d\n\n", count1, count2);

	// d (Decimal)
	count1 = printf("Decimal :%d:\n", d);
	count2 = ft_printf("Decimal :%d:\n", d);
	printf("Original count: %d, My count: %d\n\n", count1, count2);

	// i (Integer)
	count1 = printf("Integer :%i:\n", i);
	count2 = ft_printf("Integer :%i:\n", i);
	printf("Original count: %d, My count: %d\n\n", count1, count2);

	// u (Unsigned Decimal)
	count1 = printf("Un Decimal :%i:\n", u);
	count2 = ft_printf("Un Decimal :%i:\n", u);
	printf("Original count: %d, My count: %d\n\n", count1, count2);

	// x (Num in Hexadecimal low)
	count1 = printf("Hexa address :%x:\n", x);
	count2 = ft_printf("Hexa address :%x:\n", x);
	printf("Original count: %d, My count: %d\n\n", count1, count2);

	// X (Num in Hexadecimal up)
	count1 = printf("Hexa address :%X:\n", x);
	count2 = ft_printf("Hexa address :%X:\n", x);
	printf("Original count: %d, My count: %d\n\n", count1, count2);
 
	ft_printf("testing my code %d %x\n", (long)INT_MAX + 1, 12357485);
	ft_printf("testing my code %d %x\n\n", INT_MIN, 12357485);
	
	return (0);
}
*/
