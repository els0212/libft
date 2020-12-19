const char	*ft_strchr(const char *s, int c)
{
	int	st;

	while (*(s + st))
	{
		if (*(s + st) == (char)c)
			return (s + st);
		st++;
	}
	if (c == '\0')
		return (s + st);
	return (0);
}
