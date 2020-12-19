#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t			st;
	unsigned char	*b_uc;

	st = 0;
	b_uc = (unsigned char *)b;
	while (st < len)
		*(b_uc + st++) = 0;
}
