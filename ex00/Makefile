# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 16:09:08 by ljoffo            #+#    #+#              #
#    Updated: 2022/08/24 15:11:14 by ljoffo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME     = SimpleTemplate

SRCS     =	main.cpp \
		
OBJS     = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	./SimpleTemplate

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:     fclean all

.PHONY: all clean fclean re
