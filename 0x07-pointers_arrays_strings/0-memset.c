#include "main.h"

/**
* _memset - fills a memory block with constant byte
* @s: address of memory block
* @b: char input
* @n: int input
* Return: memory block
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
