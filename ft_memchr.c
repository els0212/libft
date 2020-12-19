#include "libft.h"

void	*ft_memchr(void *b, int c, size_t len)
{
	size_t			st;
	unsigned char	*b_uc;

	st = 0;
	b_uc = (unsigned char *)b;
	while(st < len)
	{
		if (b_uc[st] == (unsigned char)c)
			return (b + st);
		st++;
	}
	return (0);
}
