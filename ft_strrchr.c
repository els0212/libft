/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 17:11:06 by hyi               #+#    #+#             */
/*   Updated: 2020/12/24 17:11:08 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
