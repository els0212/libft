/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi </var/mail/hyi>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 17:00:19 by hyi               #+#    #+#             */
/*   Updated: 2020/12/24 17:01:07 by hyi              ###   ########.fr       */
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
