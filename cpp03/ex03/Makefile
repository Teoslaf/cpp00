NAME = ClapTrap 

CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address

CC = c++ 

STD = -std=c++98 

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

INC = ClapTrap.hpp 

OBJ = $(SRC:.cpp=.o) 

all : $(NAME) 

$(NAME) : $(OBJ)
	@$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME) 

%.o : %.cpp $(INC)
	@$(CC) $(CXXFLAGS) -c $< -o $@ 

clean :
	@rm -rf $(OBJ) 

fclean : clean
	@rm -rf $(NAME) 

re : fclean all 

.PHONY : all clean fclean re
