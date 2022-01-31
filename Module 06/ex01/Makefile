NAME = Serialization

SRCS = main.cpp Data.cpp

HEADER = Data.hpp

CC = @clang++

CCFLAGS = -std=c++98 -Wall -Werror

all:		$(NAME)

$(NAME):	$(HEADER)
				$(CC) $(CCFLAGS) $(SRCS) -o $(NAME)
				@echo $(YELLOW) "$(NAME) Created!" $(EOC)

fclean:
				@rm -rf $(NAME)
				@echo $(GREEN) "Fclean complete!" $(EOC)

re:			fclean all

.PHONY:		all fclean re

GREEN = "\033[0;32m"
RED = "\033[0;31m"
YELLOW = "\033[0;33m"
BLUE = "\033[0;34m"
MAGENTA = "\033[0;35m"
CYAN = "\033[0;36m"
EOC = "\033[0m"