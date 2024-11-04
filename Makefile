SRCS= 	srcs/ft_bzero.c \
		srcs/ft_isalnum.c \
		srcs/ft_isalpha.c \
		srcs/ft_isascii.c \
		srcs/ft_isprint.c \
		srcs/ft_memcpy.c \
		srcs/ft_memset.c \
		srcs/ft_strlcat.c \
		srcs/ft_strlcpy.c \
		srcs/ft_strlen.c \
		srcs/ft_tolower.c \
		srcs/ft_toupper.c \
      	srcs/ft_isdigit.c

INCLUDES= includes/libft.h
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
