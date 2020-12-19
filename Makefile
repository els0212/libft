TARGET = libft
SRCS = ft_atoi.c ft_is.c ft_memchr.c ft_memcpy.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_bzero.c ft_memccpy.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_to.c
OBJS = ${SRCS:.c=.o}
INCS = includes
CC = gcc
AR = ar
ARFLAGS = rcs
CFLAGS = -Wall -Wextra -Werror 

all : ${TARGET}.a

.c.o : ${SRCS}
	${CC} ${CFLAGS} -I${INCS} -c $< -o $@

${TARGET}.a : ${OBJS}
	${AR} ${ARFLAGS} ${TARGET}.a ${OBJS} 
	
.PHONY: all clean fclean re

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${TARGET}.a

re : fclean all
