NAME =	fragtrap

SRCS =	claptrap.cpp scavtrap.cpp fragtrap.cpp main.cpp

OBJS =	$(SRCS:.cpp=.o)

CPP =	clang++

%.o:	%.cpp
		$(CPP) $(CFLAGS) -c $< -o $(<:.cpp=.o)

CFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =	rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re