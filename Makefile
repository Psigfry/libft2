NAME=libft.a

SRCS=./src/*.c

OBJECTS=*.o

INCLUDES=./

all: $(NAME)
	
$(NAME): $(SRCS) libft.h
		@gcc -Wall -Wextra -Werror -std=c99 -I$(INCLUDES) -c $(SRCS)
		@ar rc $(NAME) $(OBJECTS)
		@ranlib $(NAME)

clean:
		@/bin/rm -f $(OBJECTS)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
