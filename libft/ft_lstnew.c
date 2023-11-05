/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <fabriciol.sousa@live.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:01:09 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/23 20:05:20 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	struct s_list	*new;
}					t_list;
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*dst;

	dst = malloc(sizeof(t_list));
	if (!dst)
		return (NULL);
	if (dst)
	{
		dst->content = content;
		dst->next = NULL;
	}
	return (dst);
}
/*
int main() 
{
    int content_value = 42;
    void *content = &content_value;

    t_list *new_node = ft_lstnew(content);
    if (new_node) 
	{
        printf("Novo nó criado com sucesso!\n");
        printf("Conteúdo do novo nó: %d\n", *((int *)(new_node->content)));
        free(new_node);
    } 
	else 
	{
        printf("Falha ao criar o novo nó.\n");
    }
    return 0;
}
*/