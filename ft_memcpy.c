#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
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
		st++;
	}
	return (dst);
}
