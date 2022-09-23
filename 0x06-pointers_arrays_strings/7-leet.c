#include "main.h"
/**
* leet - encodes a str into 1337.
* @s: string to input
*
* Return: valid address
*/

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeE0tTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}

	return (s);
}
