NAME = Serena

CC = c++ -Wextra -Wall -Werror

VERSION = -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

RM = rm -rf

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(VERSION) $(SRC) -o $(NAME)

clean :
	$(RM) $(NAME)

fclean : clean

re : fclean all

.PHONY : all clean fclean re
