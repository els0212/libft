NAME = libft.a
SRCS = ft_memset.c ft_atoi.c ft_is.c ft_memchr.c ft_memcpy.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_bzero.c ft_memccpy.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_to.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_put.c
OBJS = ${SRCS:.c=.o}
INCS = includes
CC = gcc
AR = ar
ARFLAGS = rcs
CFLAGS = -Wall -Wextra -Werror 

all : $(NAME)

.c.o : ${SRCS}
	${CC} ${CFLAGS} -I${INCS} -c $< -o $@

$(NAME) : ${OBJS}
	${AR} ${ARFLAGS} $(NAME) ${OBJS} 

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
