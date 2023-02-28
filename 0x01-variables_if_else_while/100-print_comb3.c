#include <stdio.h>

/**
 * main - prints all possible different
 * combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	for (b = 1; b <= 9; b++)
	{
		putchar('0' + a);
		putchar('0' + b);

		if (a != 9 || b != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
