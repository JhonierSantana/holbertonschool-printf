#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0;
	char len = 0;
	va_list ap;
	char buffer[2000];

	if (format == NULL || (format[0] == '%' && format[1] == '\0')
		return (-1);
	va_start(ap, format[i]);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			buffer[len] = format[i];
			i++;
		}	
	}
	write(1, buffer, len);
	va_end(ap);
	return (len);
}
