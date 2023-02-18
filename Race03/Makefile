NAME = matrix_rain

SRCS = src/*.c
INC = inc/*.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses
RM = rm -rf

all: install clean

install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCS) -I inc
	@printf "\r\33[2K$(NAME)\t \033[32;1mcreated\033[0m\n"

clean:
	@$(RM) *.h
	@$(RM) *.c

uninstall: clean
	@$(RM) $(NAME)
	@@printf "$(NAME)\t \033[31;1muninstalled\033[0m\n"

reinstall: uninstall clean all
