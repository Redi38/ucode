#include "header.h"

void mx_operations(char *operand1, char *operation, char *operand2, char *result) {
	if (*operation == '?') {
		mx_operations(operand1, "+", operand2, result);
		mx_operations(operand1, "-", operand2, result);
		mx_operations(operand1, "*", operand2, result);
		mx_operations(operand1, "/", operand2, result);
		return;
	}
	
	int operand1_len = mx_strlen(operand1), operand2_len = mx_strlen(operand2), res_len = mx_strlen(result);
	bool operand1_negative = false, operand2_negative = false, result_negative = false;
	
	if (operand1[0] == '-') {
		operand1_negative = true;
		operand1++;
		operand1_len--;
	}
	
	if (operand2[0] == '-') {
		operand2_negative = true;
		operand2++;
		operand2_len--;
	}
	
	if (result[0] == '-') {
		result_negative = true;
		result++;
		res_len--;
	}
	
	int operand1_integer = mx_atoi(operand1), operand2_integer = mx_atoi(operand2), result_integer = mx_atoi(result);
	
	for (long long i = 0; i < mx_pow(10, operand1_len); i++) {
		if (operand1_integer > 0) {
			i = operand1_integer;
		}
		char *iqueue = mx_itoa(i);
		int ilen = mx_strlen(iqueue);
		bool iiscorrect = true;
		
		for (int j = 0; j < operand1_len - ilen; j++) {
			if(mx_isdigit(operand1[j]) && operand1[j] != '0') {
				iiscorrect = false;
				break;
			}
		}
		
		for (int j = operand1_len - ilen, k = 0; j < operand1_len; j++, k++) {
			if (operand1[j] != '?' && operand1[j] != iqueue[k]) {
				iiscorrect = false;
				break;
			}
		}
		
		free(iqueue); iqueue = NULL;
		if (!iiscorrect)
			continue;
		
		for (long long j = 0; j < mx_pow(10, operand2_len); j++) {
			if (operand2_integer > 0) {
				j = operand2_integer;
			}
			char *jqueue = mx_itoa(j);
			int jlen = mx_strlen(jqueue);
			bool jiscorrect = true;
			
			for (int p = 0; p < operand2_len - jlen; p++) {
				if (mx_isdigit(operand2[p]) && operand2[p] != '0') {
					jiscorrect = false;
					break;
				}
			}
			
			for (int p = operand2_len - jlen, jqueue_i = 0; p < operand2_len; p++, jqueue_i++) {
				if (operand2[p] != '?' && operand2[p] != jqueue[jqueue_i]) {
					jiscorrect = false;
					break;
				}
			}
			
			free(jqueue); jqueue = NULL;
			if (!jiscorrect)
				continue;
			
			for (long long k = 0; k < mx_pow(10, res_len); k++) {
				if (result_integer > 0) {
					k = result_integer;
				}
				char *kqueue = mx_itoa(k);
				int kqueue_len = mx_strlen(kqueue);
				bool isCorrectK = true;
				
				for (int n = 0; n < res_len - kqueue_len; n++) {
					if (mx_isdigit(result[n]) && result[n] != '0') {
						isCorrectK = false;
						break;
					}
				}
				
				for (int n = res_len - kqueue_len, kqueue_i = 0; n < res_len; n++, kqueue_i++) {
					if (result[n] != '?' && result[n] != kqueue[kqueue_i]) {
						isCorrectK = false;
						break;
					}
				}
				
				free(kqueue); kqueue = NULL;
				if(!isCorrectK)
					continue;
				
				if (operand1_negative)
					i *= -1;
				if (operand2_negative)
					j *= -1;
				if (result_negative)
					k *= -1;
				
				if (*operation == '+') {
					if (i + j == k) {
						mx_printint(i);
						mx_printstr(" + ");
						mx_printint(j);
						mx_printstr(" = ");
						mx_printint(k);
						mx_printchar('\n');
					}
				}
				else if (*operation == '-') {
					if (i - j == k) {
						mx_printint(i);
						mx_printstr(" - ");
						mx_printint(j);
						mx_printstr(" = ");
						mx_printint(k);
						mx_printchar('\n');
					}
				}
				else if (*operation == '*') {
					if (i * j = k) {
						mx_printint(i);
						mx_printstr(" * ");
						mx_printint(j);
						mx_printstr(" = ");
						mx_printint(k);
						mx_printchar('\n');
					}
				}
				else if (*operation == '/') {
					if (j != 0 && i / j == k) {
						mx_printint(i);
						mx_printstr(" / ");
						mx_printint(j);
						mx_printstr(" = ");
						mx_printint(k);
						mx_printchar('\n');
					}
				}
				
				if (operand1_negative)
					i *= -1;
				if (operand2_negative)
					j *= -1;
				if (result_negative)
					k *= -1;
				if (result_integer > 0)
					break;
			}
			if (operand2_integer > 0)
				break;
		}
		if (operand1_integer > 0)
			break;
	}
	
	if (operand1_negative)
		operand1--;
	if (operand2_negative)
		operand2--;
	if (result_negative)
		result--;
}
