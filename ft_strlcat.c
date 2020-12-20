#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	st;
	size_t	dst_st;
	size_t	src_len;

	st = 0;
	dst_st = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0)
		return (size + src_len);
	while (src[st] && dst_st + st < size - 1)
	{
		dst[dst_st + st] = src[st];
		st++;
	}
	dst[dst_st + st] = '\0';
	if (dst_st < size)
		return (dst_st + src_len);
	return (size + src_len);
}
