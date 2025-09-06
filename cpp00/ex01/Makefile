# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alermi <alermi@student.42kocaeli.tr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/06 12:08:02 by alermi            #+#    #+#              #
#    Updated: 2025/09/06 12:09:09 by alermi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 

CXX = c++

SRCS = Phonebook.cpp	\
	   main.cpp			\
	   Contact.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

