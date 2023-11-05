/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:13:25 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/04 15:42:04 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION: Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
*/

#include "libft.h"
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Função que aplica a transformação desejada a um caractere
char sample_function(unsigned int index __attribute__((unused)), char c) 
{
    // Transforma o caractere em maiúsculo
    return toupper(c);
}

// Função que implementa ft_strlen (para simplificar o exemplo)
size_t ft_strlen(const char *s) 
{
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main() 
{
    const char *input_string = "Don't, Panic!";
    char *output_string;

    // Teste da função ft_strmapi com a função sample_function
    output_string = ft_strmapi(input_string, sample_function);

    if (output_string) {
        printf("String de entrada: %s\n", input_string);
        printf("String resultante: %s\n", output_string);
        free(output_string); // Libera a memória alocada dinamicamente
    } else {
        printf("Erro na alocação de memória.\n");
    }

    return 0;
}*/