#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		ret;
	t_list	*curr;

	ret = 0;
	curr = lst;
	while (curr)
	{
		ret++;
		curr = curr->next;
	}
	return (ret);
}
