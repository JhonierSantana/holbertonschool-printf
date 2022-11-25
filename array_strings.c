#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
int length = 0;

while (*s++)
length++;

return (length);
}

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}

void rev_string(char *s)
{
	int i;
	int j;
	char c;

	i = _strlen(s) - 1;
	j = 0;
	while (i >= j)
	{
		c = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = c;
		i = i - 1;
		j++;
	}
}
