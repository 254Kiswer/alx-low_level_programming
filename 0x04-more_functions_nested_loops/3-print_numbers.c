#include "main.h"
/**
 * print_number - print 0 - 9.
 * Return: void.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n')
}
