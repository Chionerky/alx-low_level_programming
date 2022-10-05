#include "main.h"

/**
 * _strncat - concatenates two string but add inputed number
 * of bytes
 * @dest: string to be appended on
 * @src: string source
 * @n: integer to compare
 *
 * Return: returns new value
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
