int	ft_isalpha(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 'a' && ch <= 'z')
		return (0);
	else if (ch >= 'A' && ch <= 'Z')
		return (0);
	return (1);
}

int	ft_isdigit(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= '0' && ch <= '9')
		return (0);
	return (1);
}

int	ft_isalnum(int c)
{
	if (!ft_isdigit(c) || !ft_isalpha(c))
		return (0);
	return (1);
}

int	ft_isascii(int c)
{
	if (c >= 0x00 && c <= 0x7F)
		return (0);
	return (1);
}

int	ft_isprint(int c)
{
	if (c >= 0x20 && c <= 0x7E)
		return (0);
	return (1);
}
