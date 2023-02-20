SRCS	= ft_putnbr_fd.c \
		  ft_putendl_fd.c \
		  ft_putstr_fd.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_strdup.c \
		  ft_calloc.c \
		  ft_memchr.c \
		  ft_atoi.c \
		  ft_putchar_fd.c \
		  ft_strnstr.c \
		  ft_memcmp.c \
		  ft_strncmp.c \
		  ft_strchr.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_bzero.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_strlen.c \
		  ft_strrchr.c \
		  ft_printf.c \
		  ft_puthex.c \
		  ft_sputchar.c \
		  ft_sputstr.c \
		  ft_toui.c \
		  ft_flags.c \
		  ft_putptr.c \
		  ft_sputnbr.c \
		  ft_sputunbr.c \
		  get_next_line.c \
		  get_next_line_utils.c \
		  get_next_line_bonus.c \
		  get_next_line_utils_bonus.c \
		  
OBJS	= $(SRCS:.c=.o)

NAME	= libft.a

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

AR		= ar rcs

.c.o:
		@$(CC) $(CFLAGS) -c $<

$(NAME):	$(OBJS)
	@$(AR) $(NAME) $(OBJS)

all:	$(NAME)

clean:
		@$(RM) $(OBJS)

fclean:	clean
		@$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

