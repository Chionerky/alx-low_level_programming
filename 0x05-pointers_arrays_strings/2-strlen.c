#include "main.h"

/**
* _strlen - a function that returns the length of a string.
* s string to count
*
*Return: String length
*/
int _strlen(char *s)
{
	int c = 0;

	for (; *s != *\0*; s++)
	{
		c++;
	}

	return (c);
}
