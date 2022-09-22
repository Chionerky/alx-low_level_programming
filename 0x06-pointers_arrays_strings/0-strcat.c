#include "main.h"

/**
* _strcat - concentrates two strings
* @dest: destination of string
* @src: source of string
*
* Return: returns pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; sr[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
