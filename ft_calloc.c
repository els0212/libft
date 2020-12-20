#include "libft.h"

void	ft_bzero(void *b, size_t len);

void	*ft_calloc(size_t number, size_t size)
{
	void	*ret;

	ret = (void *)malloc(number * size);
	ft_bzero(ret, number * size);
	return (ret);
}
