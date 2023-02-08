all: clean MINILIBMX
MINILIBMX:
	mkdir obj
	cd obj && clang -c ../src/mx_atoi.c ../src/mx_isdigit.c ../src/mx_isspace.c ../src/mx_printchar.c ../src/mx_printint.c ../src/mx_printstr.c ../src/mx_strcmp.c ../src/mx_strcpy.c ../src/mx_strlen.c
	ar rcs minilibmx.a obj/mx_atoi.o obj/mx_isdigit.o obj/mx_isspace.o obj/mx_printchar.o obj/mx_printint.o obj/mx_printstr.o obj/mx_strcmp.o obj/mx_strcpy.o obj/mx_strlen.o
clean:
	rm -rf minilibmx.a obj
uninstall:
	rm -rf minilibmx.a obj
reinstall: all
