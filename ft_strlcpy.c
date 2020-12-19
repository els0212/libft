#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	st;

	st = 0;
	while (st < dstsize - 1)
	{
		dst[st] = src[st];
		st++;
	}
	dst[st] = '\0';
	return (ft_strlen(dst));
}
