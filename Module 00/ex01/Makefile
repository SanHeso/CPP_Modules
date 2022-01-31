NAME = phonebook

SRCS = phonebook.cpp

HEADER = phonebook.hpp;

CC = clang++
CCFLAGS = -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(HEADER)
				$(CC) $(CCFLAGS) $(SRCS) -o $(NAME)
				@echo $(CYAN) "$(NAME) Created!" $(EOC)

fclean:
				@rm -rf $(NAME)
				@echo $(GREEN) "Fclean complete!" $(EOC)

re:			fclean all

.PHONY:		all fclean re