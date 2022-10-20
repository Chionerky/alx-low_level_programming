#include "main.h"

/**
* _strpbrk - search a str for anyset
* of bytes
* @s: str source
* @accept: accept char
* Return: returns str in frm first files
*/
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
