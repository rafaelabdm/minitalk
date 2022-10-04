# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 17:41:30 by rabustam          #+#    #+#              #
#    Updated: 2022/09/15 23:03:44 by rabustam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER	= server

CLIENT	= client

SRCS	= main_client.c main_server.c minitalk_utils.c

S_OBJ	= main_server.o minitalk_utils.o
C_OBJ	= main_client.o minitalk_utils.o

FLAGS	= -Wall -Werror -Wextra -g
CC		= cc $(FLAGS)

LIBFT	= libft/libft.a

all: $(LIBFT) $(SERVER) $(CLIENT)

.c.o: $(SRCS)
		cc -Wall -Wextra -Werror -c -o $@ $<
	
$(LIBFT) : 
	cd libft && make

$(SERVER) : $(S_OBJ)
	$(CC) $(S_OBJ) $(LIBFT) -o $@

$(CLIENT) : $(C_OBJ)
	$(CC) $(C_OBJ) $(LIBFT) -o $@

clean :
		rm -f *.o
	
fclean: clean
		cd ./libft && make fclean
		rm -f $(SERVER) $(CLIENT)

re: fclean all

.PHONY:	all clean fclean re