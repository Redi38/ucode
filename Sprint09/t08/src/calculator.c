#include "../inc/calculator.h"

int main (int argc, char *argv[]) {
	if (argc == 1) {
		write(1, "usage: ./calc [operand1] [operation] [operand2]", 47);
		return 0;
	}
	enum e_operation operation;
	enum e_error error;
	int a, b;
	bool is_operation = false;
	bool is_error = false;

	a = mx_atoi(argv[1]);
	b = mx_atoi(argv[3]);
	if (a == NOT_INT || b == NOT_INT) {
		error = INCORRECT_OPERAND;
		is_error = true;
	}

	if (mx_strncmp(argv[2], "+", 1) == 0) {
		operation = ADD;
		is_operation = true;
	}
	else if (mx_strncmp(argv[2], "-", 1) == 0) {
		operation = SUB;
		is_operation = true;
	}
	else if (mx_strncmp(argv[2], "*", 1) == 0) {
		operation = MUL;
		is_operation = true;
	}
	else if (mx_strncmp(argv[2], "/", 1) == 0) {
		operation = DIV;
		is_operation = true;
	}
	else if (mx_strncmp(argv[2], "%%", 1) == 0) {
		operation = MOD;
		is_operation = true;
	}
	else {
		error = INCORRECT_OPERATION;
		is_error = true;
	}

	if (b == 0 && operation == DIV) {
		error = DIV_BY_ZERO;
		is_error = true;
	}
	if (is_error)
		switch (error) {
			case INCORRECT_OPERAND:
				write(2, "error: invalid number", 21);
				return -1;
			case INCORRECT_OPERATION:
				write(2, "error: invalid operation", 24);
				return -1;
			case DIV_BY_ZERO:
				write(2, "error: invalid operation", 23);
				return -1;
		}
	if (is_operation)
		switch (operation) {
			case ADD:
				mx_printint(mx_add(a, b));
				break;
			case SUB:
				mx_printint(mx_sub(a, b));
				break;
			case MUL:
				mx_printint(mx_mul(a, b));
				break;
			case DIV:
				mx_printint(mx_div(a, b));
				break;
			case MOD:
				mx_printint(mx_mod(a,b));
				break;
		}
	return 0;
}
