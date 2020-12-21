/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:50:02 by hyi               #+#    #+#             */
/*   Updated: 2020/12/21 19:28:43 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	len;
	size_t	st;

	len = ft_strlen(s);
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	st = 0;
	while (st < len)
	{
		ret[st] = f(st, s[st]);
		st++;
	}
	ret[st] = '\0';
	return (ret);
}
