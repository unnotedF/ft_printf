/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flucas-d <flucas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 07:02:33 by flucas-d          #+#    #+#             */
/*   Updated: 2023/10/27 13:44:40 by flucas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*nod;
	void	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		temp = f(lst->content);
		nod = ft_lstnew(temp);
		if (!nod)
		{
			del(temp);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, nod);
		lst = lst->next;
	}
	return (new);
}
