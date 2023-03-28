#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @ch: the character to print
 *
 * Return: on success 1
 * on error, -1 and errno is set appropriately
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
