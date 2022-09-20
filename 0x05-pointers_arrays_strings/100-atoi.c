#include "main.h"

/**
* _atoi - convert str into integer
* @s: pointer to convert
*
* Return: a integer
*/
int _atoi(char *s)
{
	int c;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	ni *= mins;
	return (ni);
}
