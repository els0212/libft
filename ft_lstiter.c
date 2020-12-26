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
