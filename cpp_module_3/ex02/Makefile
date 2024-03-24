# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 05:11:32 by apeposhi          #+#    #+#              #
#    Updated: 2024/03/24 19:39:50 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Metadata
AUTHOR    := apeposhi
NAME      := fragtrap

# Sources & Objects
SRC       := main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS      := $(SRC:.cpp=.o)

# Compiler and Flags
CXX       := c++
CXXFLAGS  := -Wall -Wextra -Werror -std=c++98
EXE_FLAG  := -o
EXEC      := fragtrap

# Suffix Rules
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(EXE_FLAG) $(EXEC)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)

re:	fclean all

# Phony Targets
.PHONY:	all clean fclean re