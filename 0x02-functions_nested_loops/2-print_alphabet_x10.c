#include "main.h"

/**
* print - print_alphabet_x10 ten -letters
*
* Return: Success
*/
void print_alphabet_x10(void)
{
	int count = 0;
	char k;

	while (count++ <= 9)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);

		_putchar('\n');
	}
}

