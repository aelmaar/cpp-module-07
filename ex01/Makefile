# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 12:59:32 by ael-maar          #+#    #+#              #
#    Updated: 2023/10/23 14:56:24 by ael-maar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = $(wildcard *.cpp)

OBJ_DIR = ../obj

OBJS_PATH = ../obj/ex01

OBJS = $(addprefix $(OBJS_PATH)/, $(SRCS:.cpp=.o))

RM = rm -rf

NAME = iter

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $^ -o $@
	@echo "\033[32mEX01 COMPILED SUCCESSFULLY\033[0m"

$(OBJS_PATH)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJS_PATH)

fclean: clean
	@$(RM) $(OBJ_DIR) $(NAME)

re: fclean all

.PHONY: all re clean fclean
