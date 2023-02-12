NAME = read_life

SRC_D = src
INC_D = inc

SRC_F = src/read_file.c

INC_F = inc/header.h

CLANG = clang -std=c11 -Wall -Wextra -Werror -Wpedantic

RM = rm -rf

all: $(NAME) clean

$(NAME):
	@$(CLANG) $(SRC_F) -o $@ -I $(INC_D)
	@printf "\r\33[2K$(NAME)\033[33;1m\tcompile\n"

clean:
	@$(RM) $(SRC_D)/*.h
	@printf "$(INC_F)\t \033[31;1mdeleted\033[0m\n"

unistall: clean
	@$(RM) $(NAME)
	@printf "$(NAME)\t\033[31;1muninstalled\n"

reinstall: unistall all
