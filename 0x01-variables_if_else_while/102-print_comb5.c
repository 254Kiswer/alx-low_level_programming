 #include <stdio.h>
/**
 * main - print pairs of double digits combos
 * Description: print pairs of double digit combos
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;
	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');

				if (i != 98 || J != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
