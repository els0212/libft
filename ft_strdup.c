#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *str)
{
	char	*ret;
	int		st;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	st = 0;
	while (str[st])
	{
		ret[st] = str[st];
		st++;
	}
	ret[st] = '\0';
	return (ret);
}
