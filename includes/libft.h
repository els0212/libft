#ifndef LIBFT_H
# define LIBFT_H

#include "stddef.h"
unsigned int	ft_make_int(const char *ptr, int st, int ed);
int				ft_aoti(const char *nptr);
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
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
int				ft_strncmp(const char *s1, const char *s2, size_t len);
int				ft_toupper(int c);
int				ft_tolower(int c);
#endif
