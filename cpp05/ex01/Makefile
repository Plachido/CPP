NAME =	form

SRCS =	form.cpp bureaucrat.cpp	main.cpp

OBJS =	$(SRCS:.cpp=.o)

CPP =	clang++

%.o:	%.cpp
		$(CPP) $(CFLAGS) -c $< -o $(<:.cpp=.o)

CFLAGS =	-Wall -Wextra -Werror -std=c++98 -ggdb3 

RM =	rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re