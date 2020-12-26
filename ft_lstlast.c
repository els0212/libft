#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ret;

	ret = lst;
	while (ret->next)
	{
		ret = ret->next;
	}
	return (ret);
}
