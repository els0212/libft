#include "libft.h"

unsigned int	ft_make_int(const char *ptr, int st, int ed)
{
	unsigned int	ret;
	unsigned int	mod;

	ret = 0;
	mod = 1;
	while (--ed >= st)
	{
		ret += ((unsigned int)(ptr[ed] - '0') * mod);
		mod *= 10;
	}
	return (ret);
}

int				ft_atoi(const char *nptr)
{
	int	st;
	int	ed;
	int	sign;

	sign = 1;
	st = 0;
	while (nptr[st] && (nptr[st] == ' ' ||
				(nptr[st] >= 0x09 && nptr[st] <= 0x0D)))
		st++;
	if (!nptr[st])
		return (0);
	if (nptr[st] == '-')
		sign = -1;
	if (sign == -1 || nptr[st] == '+')
		st++;
	if(nptr[st] < '0' || nptr[st] > '9')
		return (0);
	ed = st;
	while (nptr[ed] >= '0' && nptr[ed] <= '9')
		ed++;
	return ((int)ft_make_int(nptr, st, ed) * sign);
}
