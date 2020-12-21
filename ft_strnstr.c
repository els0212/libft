/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:50:30 by hyi               #+#    #+#             */
/*   Updated: 2020/12/21 10:56:51 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	st;
	size_t	lt_len;

	st = 0;
	lt_len = ft_strlen(little);
	if (!little || lt_len == 0)
		return ((char *)big);
	else if (lt_len <= len)
	{
		while (big[st] && st + lt_len <= len)
		{
			while (big[st] && big[st] != little[0])
				st++;
			if (!big[st] || st + lt_len >= len)
				break ;
			if (!ft_strncmp(&big[st], little, lt_len))
				return (&((char *)big)[st]);
			st++;
		}
	}
	return (0);
}
