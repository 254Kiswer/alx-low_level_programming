#include "main.h"
/**
 * void print_alphabet_x10(void) - prints alphabets 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{

		for (i = 'a'; i <= 'z' ; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
	}
}
