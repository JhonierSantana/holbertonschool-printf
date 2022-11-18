#include "main.h"

 int _printf (const char *format, ...) 
{
	va_list ap;
	char buffer[2000];
	int a = 0;
	int count = 0;
	va_start (ap, format);

	if (!format)
		exit (1);
	while (format && format[a])
    	{
	if (format[a] != '%')
	{

	buffer[count] = format[a];  
	count += 1;
	}
	else
	{
	buffer[count] = format[a];
        count += 1;
	}
	a++;
	}
  
	write (1, buffer, count);
	return (a); 
	va_end (ap);
}
