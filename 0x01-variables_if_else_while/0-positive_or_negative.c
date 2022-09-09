#include <stdio.h>
#include <time.h>
/* main header goes here*/

/* betty style doc for function main goes there*/
int main(void)
{
	int n;

	srand(time(0));
	
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0) {
		/*if condition is true then print the following */
		printf("%d is positive\n", n);
	}  /* if condition is true the print the following */
	else if (n > 0) {
		printf("%d is negative\n", n);
	}
	else {
		printf("%d is zero\n", c);
	}
	return (0);
}
