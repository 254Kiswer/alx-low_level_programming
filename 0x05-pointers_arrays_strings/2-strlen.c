#include "main.h"
#include <string.h>
/**
 * _strlen -> function thats returns the length of the string
 * @s: string parameter
 * Returns: the length of a string
 */
int _strlen(char *s)
{
	int c = 0;
	
	for (; *s != '\0'; s++)
	{
		c++;

	}
	return (c);
}
