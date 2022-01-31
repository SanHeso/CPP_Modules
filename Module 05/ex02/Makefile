NAME = Bureaucrat

SRCS = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

HEADER = Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

FILE = Home_shrubbery

CC = @clang++
CCFLAGS = -std=c++98 -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(HEADER)
				$(CC) $(CCFLAGS) $(SRCS) -o $(NAME)
				@echo $(YELLOW) "$(NAME) Created!" $(EOC)

fclean:
				@rm -rf $(NAME) $(FILE)
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