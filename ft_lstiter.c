/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:28:16 by hyi               #+#    #+#             */
/*   Updated: 2020/12/26 21:28:17 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr;
	t_list	*prev;

	if (!lst || !f)
		return ;
	curr = lst;
	while (curr)
	{
		prev = curr;
		curr = curr->next;
		f(prev);
	}
}
