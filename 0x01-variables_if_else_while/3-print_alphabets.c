#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by uppercase,
 * then new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}

	for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch);
}
	putchar('\n');
	return (0);
}
