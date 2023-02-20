CLIENT_SRCS		= client.c

SERVER_SRCS		= server.c

CLIENT			= client

SERVER			= server

B_CLIENT		= client_bonus

B_SERVER		= server_bonus

B_CLIENT_SRCS	= client_bonus.c

B_SERVER_SRCS	= server_bonus.c

CLIENT_OBJS		= $(CLIENT_SRCS:.c=.o)

SERVER_OBJS		= $(SERVER_SRCS:.c=.o)

B_CLIENT_OBJS	= $(B_CLIENT_SRCS:.c=.o)

B_SERVER_OBJS	= $(B_SERVER_SRCS:.c=.o)

BONUS			= client_bonus.c \server_bonus.c \

NAME			= minitalk

CFLAGS			= -Wall -Wextra

LIBFT			= libft/

$(NAME):	$(CLIENT) $(SERVER) 

$(CLIENT): $(CLIENT_OBJS) minitalk.h
		@cd $(LIBFT) && make && cp libft.a ../
		@cc $(CFLAGS) $(CLIENT_OBJS) libft.a -o $(CLIENT)

$(SERVER): $(SERVER_OBJS) minitalk.h
		@cc $(CFLAGS) $(SERVER_OBJS) libft.a -o $(SERVER)
		@rm -f libft.a

$(B_CLIENT): $(B_CLIENT_OBJS) minitalk_bonus.h
		@cd $(LIBFT) && make && cp libft.a ../
		@cc $(CFLAGS) $(B_CLIENT_OBJS) libft.a -o $(B_CLIENT)	

$(B_SERVER): $(B_SERVER_OBJS) minitalk_bonus.h
		@cc $(CFLAGS) $(B_SERVER_OBJS) libft.a -o $(B_SERVER)
		@rm -f libft.a

all: $(NAME)

clean:	
		@rm -f $(CLIENT_OBJS) $(SERVER_OBJS) $(B_CLIENT_OBJS) $(B_SERVER_OBJS) $(CLIENT) $(SERVER) $(B_CLIENT) $(B_SERVER)
		@cd $(LIBFT) && make clean

fclean: clean
		@cd $(LIBFT) && make fclean

re: fclean all

bonus: $(B_CLIENT) $(B_SERVER) 

.PHONY: all clean fclean re bonus
