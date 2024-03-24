# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 17:43:23 by apeposhi          #+#    #+#              #
#    Updated: 2024/03/24 19:38:11 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Metadata
AUTHOR    := apeposhi
NAME      := main

# Sources & Objects
SRC       := main.cpp Contact.cpp Phonebook.cpp
OBJS      := $(SRC:.cpp=.o)

# Compiler and Flags
CXX       := c++
CXXFLAGS  := -Wall -Wextra -Werror -std=c++98
EXE_FLAG  := -o
EXEC      := main

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