NAME = eval_expr

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: clean all

$(NAME): main.c tools.h btree.h eval_expr.h
	gcc -Wall -Wextra -Werror -o $(NAME) $<
