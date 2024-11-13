SRCS= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
		ft_striteri.c ft_strmapi.c \
		ft_itoa.c

BONUS_SRCS= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c
INCLUDES= libft.h
NAME= libft.a
AR= ar -rcs
CC= cc
OBJ_DIR= objs
BONUS_OBJS= $(BONUS_SRCS:.c=.o) 
OBJS= $(SRCS:.c=.o)
BONUS_OBJS := $(addprefix $(OBJ_DIR)/, $(BONUS_OBJS))
OBJS := $(addprefix $(OBJ_DIR)/, $(OBJS))
RM= rm -f
FLAGS= -Wall -Werror -Wextra

$(OBJ_DIR)/%.o : %.c $(INCLUDES) Makefile
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@ -I $(INCLUDES)

all: $(NAME) Makefile

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: 
	@$(MAKE) $(NAME) SRCS="$(SRCS) $(BONUS_SRCS)"

clean:
	$(RM) $(OBJS)
	$(RM) $(BONUS_OBJS)
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
