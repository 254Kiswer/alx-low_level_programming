#include <stdio.h>
/**
 * main - entry point
 * description: add one line to this code, so that the program prints a[2] = 98
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*write your line of code here...
	 * Remember:
	 * main - magic
	 * you are not allowed to use a
	 * you are not allowed to modify p
	 * only one statement
	 * you are not allowed to code anything else than this line 
	 */
	*(p + s) = 98;
	/* ....so that this prints 98\n */

	printf("a[2] = %d\n", a[2]);
	return (0);
}
