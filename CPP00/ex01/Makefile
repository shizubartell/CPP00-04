# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abartell <abartell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 01:15:41 by abartell          #+#    #+#              #
#    Updated: 2023/03/05 01:16:21 by abartell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=			phonebook

FLAG			:=			-Wall -Wextra -Werror

STD_FLAG		:=			-std=c++98

SRC				:=			main.cpp \
							Contact.cpp \
							PhoneBook.cpp

all: $(NAME)

$(NAME): $(SRC)
		c++ $(FLAG) $(STD_FLAG) $(SRC) -o $(NAME)
		@echo "$(NAME) ready to be tested!"

clean:
		rm -f $(NAME)

fclean: clean
		@echo "Everything cleaned up for $(NAME)!"

re: fclean all