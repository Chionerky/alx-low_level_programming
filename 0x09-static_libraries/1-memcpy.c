#include "main.h"

/**
* _memcpy - copy memory data
* @dest: dest memory area
* @src: source memory area
* @n: bytes to cpy
* Return: area replaced
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

