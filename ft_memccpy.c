#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t				st;
	unsigned char		*dst_uc;
	const unsigned char	*src_uc;

	st = 0;
	dst_uc = (unsigned char *)dst;
	src_uc = (const unsigned char *)src;
	while(st < len)
	{
		dst_uc[st] = src_uc[st];
		if (dst_uc[st] == (unsigned char)c)
			return (dst + st + 1);
		st++;
	}
	return (0);
}
