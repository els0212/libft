#include "libft.h"

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	ft_strlcpy(ret, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcpy(&ret[ft_strlen(s1)], (char *)s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (ret);
}
