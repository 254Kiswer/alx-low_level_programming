#include "main.h"
#include <stdio.h>

/**
 * main - print name
 * @argc: argument count
 * @argv:argument vector for values
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
