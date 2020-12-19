#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len);
size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	st;

	st = 0;
	if (!little)
		return ((char *)big);
	else if (ft_strlen(little) <= len)
	{
		while (big[st])
		{
			while (big[st] && big[st] != little[0])
				st++;
			if (!big[st] || st >= len)
				break ;
			if (!ft_strncmp(&big[st], little, len - st))
				return (&((char *)big)[st]);
			st++;
		}
	}
	return (0);
}
