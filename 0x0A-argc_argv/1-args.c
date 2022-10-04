#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments.
 * @argc: argument count
 * @argv: argument vector for values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
