#include "main.h"
/**
 * *_strchr - search the first occurance of the charater in a string pointed
 * @s: string pointed
 * @c: character to search
 * Return: s ( the first occurence of the char)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
