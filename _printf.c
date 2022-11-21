#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	
	char *buffer;
	int a = 0;
	int count = 0;
	int (*cases_print)(va_list, char *buffer, int len); // funcion de la estructura, se esta llamando
	
	va_start (ap, format);
	
	if (!format)
		exit(1);

   buffer = malloc(5000);

	while (format[a])
	{
		if (format[a] != '%')
		{
	        count++;
	        count = _putchar(format[a]); /* -> funciona con esto pero sale un porcentaje en todo */
	        
	     /*   buffer = realloc(buffer, count);
	        buffer[a] = format[a]; */
		}
		// else donde debemos llamar a la estructura "cases_print" y darle un = que vendria ser llamar la funcion get_prints_cases del archivo get func que contiene los casos

	    
	  a++;
	}
	return (count);
	free(buffer);
	va_end(ap);
}
