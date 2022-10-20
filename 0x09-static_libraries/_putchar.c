#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to prints
 *
 * Return: on success 1
 * on error, -1 is returned and error is set right
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
