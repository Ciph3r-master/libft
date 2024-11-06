SRCS= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c ft_strdup.c \
		ft_substr.c


INCLUDES= libft.h
NAME= libft.a
AR= ar -rcs
CC= cc
OBJS= $(SRCS:.c=.o) 
RM= rm -f
FLAGS= -Wall -Werror -Wextra

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(INCLUDES)

all: ${NAME}

${NAME}: ${OBJS}
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
