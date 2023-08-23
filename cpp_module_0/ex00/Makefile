# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 16:29:37 by apeposhi          #+#    #+#              #
#    Updated: 2023/08/23 12:58:38 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Metadata
AUTHOR    := apeposhi
NAME      := megaphone

# Sources & Objects
SRC       := megaphone.cpp
OBJS      := $(SRC:.cpp=.o)

# Compiler and Flags
CXX       := clang++
CXXFLAGS  := -Wall -Wextra -Werror -std=c++98
EXE_FLAG  := -o
EXEC      := megaphone

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