#include "main.h"

/**
 * _strncpy - c funtion to copy string including terminating
 * null type
 * @dest: the dstination of str
 * @src: value of thre string
 * @n: n copy limit
 *
 * Return: char value
 */

char  *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
