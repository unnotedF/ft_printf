/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:11:15 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/20 12:53:12 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_nbr_size(int nbr)
{
	size_t	size;

	size = 1;
	while (nbr / 10)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	if (n == 0)
		return (ft_strdup("0"));
	size = get_nbr_size(nbr);
	if (n < 0)
	{
		size++;
		nbr = -(long)n;
	}
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	str[size] = '\0';
	while (size > 0)
	{
		str[--size] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	int	nums[] = {-12345, 6789, 0, 987654321, -987654321};
	int	num_count = sizeof(nums) / sizeof(nums[0]);

	for (int i = 0; i < num_count; i++)
	{
		char *str = ft_itoa(nums[i]);
		printf("Number: %d, String: %s\n", nums[i], str);
		free(str);
	}

	return (0);
}*/
