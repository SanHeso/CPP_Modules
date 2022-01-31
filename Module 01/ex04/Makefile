NAME = replace

SRCS = main.cpp

CC = @c++
CCFLAGS = -std=c++98 -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):
				$(CC) $(CCFLAGS) $(SRCS) -o $(NAME)
				@echo $(CYAN) "$(NAME) Created!" $(EOC)

fclean:
				@rm -rf $(NAME)
				@echo $(GREEN) "Fclean complete!" $(EOC)

re:			fclean all

.PHONY:		all fclean re

GREEN = "\033[0;32m"
CYAN = "\033[0;36m"
EOC = "\033[0m"