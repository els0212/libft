#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	st;

	st = 0;
	while (*(s + st))
		st++;
	return (st);
}
