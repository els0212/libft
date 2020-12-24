/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyi <hyi@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:11:51 by hyi               #+#    #+#             */
/*   Updated: 2020/12/24 17:03:07 by hyi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "stddef.h"
# include <stdlib.h>
# include <unistd.h>
# define DIVISOR 10

long			ft_atoi(const char *nptr);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
void			*ft_memchr(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t len);
void			*ft_memset(void *dest, int c, size_t len);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);
char			*ft_strnstr(const char *big, const char *little, size_t len);
void			ft_bzero(void *b, size_t len);
void			*ft_memccpy(void *dst, const void *src, int c, size_t len);
int				ft_memcmp(const void *b1, const void *b2, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t len);
const char		*ft_strchr(const char *s, int c);
const char		*ft_strrchr(const char *s, int c);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
int				ft_strncmp(const char *s1, const char *s2, size_t len);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strdup(const char *str);
void			*ft_calloc(size_t number, size_t size);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s1, const char *s2);
char			**ft_split(const char *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
int				ft_cnt_lines(const char *s, char c);
int				ft_next_idx(const char *s, char c, int st);
#endif
