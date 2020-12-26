/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:28:32 by hyi               #+#    #+#             */
/*   Updated: 2020/12/26 21:28:33 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*root;
	t_list	*new_node;
	t_list	*curr;

	if (!lst || !f)
		return (0);
	curr = lst;
	root = 0;
	while (curr)
	{
		if (!(new_node = ft_lstnew(f(curr->content))))
			ft_lstclear(&root, del);
		if (!root)
			root = new_node;
		else
			ft_lstadd_back(&root, new_node);
		curr = curr->next;
	}
	return (root);
}
