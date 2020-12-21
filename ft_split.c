/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:59:43 by hyi               #+#    #+#             */
/*   Updated: 2020/12/21 11:10:12 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_next_idx(const char *s, char c, int st)
{
	while (s[st] && s[st] != c)
		st++;
	return (st);
}

int		ft_cnt_lines(const char *s, char c)
{
	int	st;
	int	cnt;

	st = 0;
	cnt = 0;
	while (s[st] && s[st] == c)
		st++;
	while (s[st])
	{
		st = ft_next_idx(s, c, st);
		cnt++;
		while (s[st] && s[st] == c)
			st++;
	}
	return (cnt);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	int		ret_st;
	int		st;

	if (!s || !c)
		return (0);
	ret = (char **)malloc(sizeof(char *) * (ft_cnt_lines(s, c) + 1));
	ret_st = 0;
	st = 0;
	while (s[st] && s[st] == c)
		st++;
	while (ret_st < ft_cnt_lines(s, c))
	{
		ret[ret_st++] = ft_substr(s, st, ft_next_idx(s, c, st) - st);
		st = ft_next_idx(s, c, st);
		while (s[st] && s[st] == c)
			st++;
	}
	ret[ret_st] = '\0';
	return (ret);
}
