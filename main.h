#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

typedef struct cases_all // estrcutura con la cual podemos llamar e imprimir cada caso
{
	char *print_cases;
	int (*cases_print)(va_list, char *buff, int len );
} cases;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_print_cases(char *arg))(va_list, char *, int);
int print_c(va_list ap, char *len);
//int print_p(va_list p);

#endif
