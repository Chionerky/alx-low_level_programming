#include "main.h"

/**
* _strcpy - copy str
* @dest: destination val
* @src: source val
*
* Return: to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
