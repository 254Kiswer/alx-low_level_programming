#include "main.h"
/**
 * _strlen -> function thats returns the length of the string
 * @s: string parameter
 * Returns: the length of a string
 */
int _strlen(char *s)
{
	int len;
	
	while (*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}
