#include <stdio.h>

/**
 * main - prints alphabets in lowercase,
 * followed by a new line, except 'e' and 'q'.
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
{
	if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
	ch++;
}
	putchar('\n');
	return (0);
}
