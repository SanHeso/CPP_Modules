NAME = megaphone

SRCS = Megaphone.cpp

CC = clang++
CCFLAGS = -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):
				$(CC) $(CCFLAGS) $(SRCS) -o $(NAME)
				@echo $(CYAN) "$(NAME) Created!" $(EOC)

fclean:
				@rm -rf $(NAME)
				@echo $(GREEN) "Fclean complete!" $(EOC)

re:			fclean all

.PHONY:		all fclean re