SRCS	= get_next_line.c \
		  get_next_line_utils.c \
		  get_next_line_bonus.c \
		  get_next_line_utils_bonus.c \

OBJS	= $(SRCS:.c=.o)

NAME	= gnl.a

CC		= -cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

AR		= ar rcs

.c.o: $(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
