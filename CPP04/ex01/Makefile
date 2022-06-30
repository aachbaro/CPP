NAME		= Animal
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .
SRCS		= SRCS/main.cpp \
				SRCS/Dog.cpp \
				SRCS/Cat.cpp \
				SRCS/Animal.cpp \
				SRCS/WrongAnimal.cpp \
				SRCS/WrongCat.cpp \
				SRCS/Brain.cpp
CC			= c++
CFLAGS		= -Wall #-Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Assembling $@"
	@$(CC) $(CFLAGS) -o $@ $^
clean:
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re test