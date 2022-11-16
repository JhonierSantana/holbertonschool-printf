#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>

typedef struct print
{
	char *p;
	void (*f)(va_list);
} printf_f;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_c(va_list s);

#endif
