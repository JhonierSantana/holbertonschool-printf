#include "main.h"

/**
 * _printf - printf a simple snetence
 *
 * @format - sentence
 *
 * Return 0
 */
int _printf(const char *format, ..)
{
	int s;
	va_list ap;

	if (format == NULL)
		return (-1);
	
	s = _strlen(format);
	if (s <= 0)
		return (0);

	va_star(ap, format);
	s = arg(format, ap);

	_puthcar (1);
	va_end(ap);

	return (s);
}
