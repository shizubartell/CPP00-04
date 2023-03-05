# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abartell <abartell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 23:55:01 by abartell          #+#    #+#              #
#    Updated: 2023/03/05 00:02:30 by abartell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=			megaphone

FLAG			:=			-Wall -Wextra -Werror

STD_FLAG		:=			-std=c++98

SRC				:=			megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
		c++ $(FLAG) $(STD_FLAG) $(SRC) -o $(NAME)
		@echo "$(NAME) ready to be tested!"

clean:
		rm -f $(NAME)

fclean: clean
		@echo "Everything cleaned up for $(NAME)!"

re: fclean all