NAME		= Bureaucrat
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .
SRCS		= SRCS/main.cpp \
				SRCS/Bureaucrat.cpp \
				SRCS/Form.cpp \
				SRCS/ShrubberyCreationForm.cpp \
				SRCS/RobotomyRequestForm.cpp \
				SRCS/PresidentialPardonForm.cpp \
				SRCS/Intern.cpp
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Assembling $@"
	@$(CC) $(CFLAGS) -o $@ $^
clean:
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re test