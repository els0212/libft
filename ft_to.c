/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:51:12 by hyi               #+#    #+#             */
/*   Updated: 2020/12/21 10:51:42 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 'a' && ch <= 'z')
		return (c - 0x20);
	return (c);
}

int	ft_tolower(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 'A' && ch <= 'Z')
		return (c + 0x20);
	return (c);
}
