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
		printf("is positive\n");
	}  /* if condition is true the print the following */
	else if (n = 0) {
		printf("is zero\n");
	}
	else {
		printf("is negative\n");
	}
	return (0);
}
