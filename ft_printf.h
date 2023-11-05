/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:04:04 by flucas-d          #+#    #+#             */
/*   Updated: 2023/11/02 07:36:42 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define FLAGS "cspdiuxX%"
# define LOW_HEX "0123456789abcdef"
# define UP_HEX "0123456789ABCDEF"
# define DEC "0123456789"
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>
# include "libft/libft.h"

int		ft_printf(const char *s, ...);
int		print_format(char *s, int *i, va_list args);
int		ft_print_num(long int n);
int		ft_print_str(char *s);
int		ft_print_point(unsigned long int p);
int		ft_putbase(unsigned long int n, char *base, int count);

#endif