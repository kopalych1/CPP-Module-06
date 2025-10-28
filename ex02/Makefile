# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akostian <akostian@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 14:47:56 by akostian          #+#    #+#              #
#    Updated: 2025/10/28 12:17:52 by akostian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= Identify

VPATH				= src

SRC_DIR				= src
SRCS				= main.cpp \
					  Base.cpp

INC_DIR				= include
INCLUDES			= -I$(INC_DIR)

BUILD_DIR			= build

OBJS				= $(addprefix $(BUILD_DIR)/, $(SRCS:%.cpp=%.o))
DEPS				= $(OBJS:.o=.d)

CC					= c++
CFLAGS				= -Wall -Wextra -Werror -g3 -std=c++98 -MMD

RM					= rm -rf



all: $(NAME)
#


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
#


$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)
#

$(LOG_DIR):
	mkdir -p $(LOG_DIR)
#


$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
#


run: all
	./$(NAME)
#

vrun: all
	valgrind --leak-check=full ./$(NAME)
#


clean:
	$(RM) $(BUILD_DIR)
#

fclean:
	$(RM) $(BUILD_DIR) $(NAME)
#

re:
	@$(MAKE) --no-print-directory fclean
	@$(MAKE) --no-print-directory all
#


-include $(DEPS)


.PHONY: all clean fclean re