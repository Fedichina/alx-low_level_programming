#include <stdio.h>

/**
 * main - prints all poddible combinations
 * of single-digit numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
{
	putchar('0' + a);
	if (a != 9)

	{
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');
	return (0);
}
