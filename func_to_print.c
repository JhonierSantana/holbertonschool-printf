#include "main.h"

int print_c(va_list ap, char *buff, int len)
{
	char *c;

	c = malloc((sizeof(char) + 1));
	c[0] = va_arg(ap, int);
	len = replace(buff, c, len);
	free(c);
	return (len);
}

int print_s(va_list ap, char *buff, int len)
{
    char *s;
	char *a;
	int len_s;

	a = va_arg(ap, char*);
	len_s = _strlen(a);
	s = malloc((sizeof(char) * len_s) + 1);
	_strcpy(s, a);
	len = replace(buff, s, len);
	free(s);
	return (len);
}
