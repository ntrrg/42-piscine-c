NAME = ft_display_file

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: clean all

$(NAME): main.c tools.h
	gcc -Wall -Wextra -Werror -Iincludes -o $(NAME) $<
