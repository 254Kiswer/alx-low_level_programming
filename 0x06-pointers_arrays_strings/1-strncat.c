#include "main.h"
#include <string.h>
/**
 * _strncat - function to appen some char
 * @dest: first param
 * @src: second param
 * @n: third param
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
