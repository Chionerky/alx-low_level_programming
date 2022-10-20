#include "main.h"

/**
* _strchr - locate char for string
* @s: string src
* @c: char tobe input
*
* Return: string from char input
*/
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
