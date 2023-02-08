NAME = Form

CC = c++ -Wextra -Wall -Werror

VERSION = -std=c++98

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

RM = rm -rf

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(VERSION) $(SRC) -o $(NAME)

clean :
	$(RM) $(NAME)

fclean : clean

re : fclean all

.PHONY : all clean fclean re
