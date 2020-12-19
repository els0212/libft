#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t	st;
	unsigned char	*dest_uc;

	st = 0;
	dest_uc = (unsigned char *)dest;
	while (st < len)
		*(dest_uc + st++) = (unsigned char)c;
	return (dest);
}
