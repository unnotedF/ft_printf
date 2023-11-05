/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:41:43 by flucas-d          #+#    #+#             */
/*   Updated: 2023/08/29 18:49:15 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
LIB <ctype.h>
Teste de Caracteres alfanumericos

A função verifica se os caracteres sao alfa ou digitos
*/

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
