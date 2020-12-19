int		ft_strncmp(const char *s1, const char *s2, int len)
{
	int	st;

	st = 0;
	while (s1[st] && s2[st] && st < len)
	{
		if (s1[st] != s2[st])
			return (s1[st] - s2[st]);
		st++;
	}
	if (len <= 0 || st == len)
		return (0);
	return (s1[st] - s2[st]);
}
