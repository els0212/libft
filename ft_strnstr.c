#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len);
size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	st;
	size_t	lt_len;

	st = 0;
	lt_len = ft_strlen(little);
	if (!little || lt_len == 0)
		return ((char *)big);
	else if (lt_len <= len)
	{
		while (big[st] && st + lt_len <= len)
		{
			while (big[st] && big[st] != little[0])
				st++;
			if (!big[st] || st + lt_len >= len)
				break ;
			if (!ft_strncmp(&big[st], little, lt_len))
				return (&((char *)big)[st]);
			st++;
		}
	}
	return (0);
}
