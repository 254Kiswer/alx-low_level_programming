#include "main.h"
#include <string.h>
/**
 *strncpy - a function copies a string
 *@dest: parameter 1
 *@src: parameter 2
 *@n: parameter 3
 *Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
