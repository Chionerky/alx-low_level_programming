#include "main.h"
#include <stdio.h>

/**
* _strcat - concentrates two strings
* @dest: destination of the string
* @src: source of string
*
* Return: A pointer to the string resulting dest
*/
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; scr[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
