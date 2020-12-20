#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	len;
	size_t	st;

	len = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	st = 0;
	while (st < len)
	{
		ret[st] = f(st, s[st]);
		st++;
	}
	ret[st] = '\0';
	return (ret);
}
