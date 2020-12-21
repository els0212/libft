/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:47:04 by hyi               #+#    #+#             */
/*   Updated: 2020/12/21 10:55:56 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strchr(const char *s, int c)
{
	int	st;

	st = 0;
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

const char	*ft_strrchr(const char *s, int c)
{
	int			st;
	const char	*ret;

	st = 0;
	ret = 0;
	while (*(s + st))
	{
		if (*(s + st) == (char)c)
			ret = s + st;
		st++;
	}
	if (c == '\0')
		ret = s + ft_strlen(s);
	return (ret);
}
