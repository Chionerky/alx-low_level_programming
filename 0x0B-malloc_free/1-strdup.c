#include "main.h"
#include <stdlib.h>

/**
* _strdup - for string duplication functions
* @str: string to be duplicated
*
* Return: a string duplicate copy
*/
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* check if str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	/* check if malloc was succesful */

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);

}
