#include "main.h"
#include <stdlib>
/**
 * _strdup - returns pointer to a newly allocated space
 * in memory with a duplicated str
 * @str: pointer to str duplicate
 *
 * Returns: NULL if str is null
 * pointer NULL if str on success
 * NULL if mem was nt enough
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* check int len, i; */
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
