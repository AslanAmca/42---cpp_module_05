# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 12:33:21 by aaslan            #+#    #+#              #
#    Updated: 2023/11/21 17:50:16 by aaslan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= bureaucrat
CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98
SRC			:= PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp AForm.cpp Bureaucrat.cpp main.cpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)
	@clear

fclean: clean

re: fclean all

.PHONY: all clean fclean re