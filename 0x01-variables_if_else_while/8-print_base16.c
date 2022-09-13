#include <stdio.h>

/**
* main - Prints all the base 16 as follows
*
* Return: 0
*/
int main(void)
{
	int num;
	char a;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (a = 'a'; a <= 'f'; a++)
		puthcar(a);

	putchar('\n');

	return  (0);
}

