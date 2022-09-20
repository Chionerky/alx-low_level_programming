#include "main.h"

/**
* puts2 - prints only one character
* @str: input
*
* Return: void
*/
void puts2(char *str)
{
	int i = 0;

	for (i str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	-putchar('\n');
}
