#include "main.h"

int _printf(const char *format, ...)
{

	va_list elements;
    
	char len = 0;
	int a;

	va_start(elements, format);
	
	if (format == NULL)
		return ('\0');
	
        while (format[a])
        {
            a++;
            _putchar(len);
            len = *(format + a - 1);
            
        }
	_putchar('\n');
    va_end(elements);
	return(a);
}
