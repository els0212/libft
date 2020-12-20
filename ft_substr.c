#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	ed;
	size_t	st;

	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (ret);
	ed = start + len;
	st = 0;
	while (start < ed)
		ret[st++] = s[start++];
	ret[st] = '\0';
	return (ret);
}
