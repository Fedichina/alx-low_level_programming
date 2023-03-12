#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * separated by a comma
 * @n: number to begin counting at
 */
void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
	{
	printf("%d,", n);
	}
	for (n = 0; n > 98; n--)
	{
	printf("%d,", n);
	}
printf("\n");
}
