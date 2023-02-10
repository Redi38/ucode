NAME := part_of_the_matrix
CFLAGS := -std=c11 -Wall -Wextra -Werror -Wpedantic

all: $(NAME)

$(NAME): 
	clang $(CFLAGS) -Iinc -o $(NAME) src/*.c

clean:
	rm -rf $(NAME)

uninstall:
	rm -rf $(NAME)

reinstall:
	make unistall
	make
