#include "main.h"
/**
 * _isalpha - checks if alphabtic character
 * @c: is a character argument
 * Return: returns 1 if c is a letter, lowercase or uppercase
 * else return 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
