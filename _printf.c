#include "main.h"

int _printf(const char *format, ...)
{

	va_list elements;
    
	char len;
	int a;

	va_start(elements, format);

        while (format[a])
        {
            a++;
            _putchar(len);
            len = *(format + a - 2);
            
        }
	_putchar('\n');
    va_end(elements);
	return(a);
}
