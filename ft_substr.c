/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:51:05 by hyi               #+#    #+#             */
/*   Updated: 2020/12/21 10:51:06 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	ed;
	size_t	st;

	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (ret);
	ed = start + len;
	st = 0;
	while (start < ed)
		ret[st++] = s[start++];
	ret[st] = '\0';
	return (ret);
}
