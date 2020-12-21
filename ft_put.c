/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:46:49 by hyi               #+#    #+#             */
/*   Updated: 2020/12/21 20:02:28 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define DIVISOR 10

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char			s[11];
	unsigned int	n_u;
	unsigned int	div;
	int				st;

	st = 0;
	if (n < 0)
		n_u = (unsigned int)(n * -1);
	else
		n_u = (unsigned int)n;
	while ((div = n_u / DIVISOR))
	{
		s[st++] = n_u % DIVISOR + '0';
		n_u = div;
	}
	s[st++] = n_u + '0';
	if (n < 0)
		s[st++] = '-';
	while (--st >= 0)
		write(fd, &s[st], 1);
}
