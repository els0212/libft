/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:47:22 by hyi               #+#    #+#             */
/*   Updated: 2020/12/21 10:56:15 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	ft_strlcpy(ret, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcpy(&ret[ft_strlen(s1)],
			(char *)s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (ret);
}
