#include <stdio.h>

/**
* main - Prints base 10 digits start from 0
*
* Description - using only putchar no char
* variables
*
* Return: 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}

