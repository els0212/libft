/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:41:33 by hyi               #+#    #+#             */
/*   Updated: 2020/12/21 10:41:35 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else if (ch >= 'A' && ch <= 'Z')
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

int	ft_isascii(int c)
{
	if (c >= 0x00 && c <= 0x7F)
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (c >= 0x20 && c <= 0x7E)
		return (1);
	return (0);
}
