#include <stdio.h>

/**
* main - Entry for putchar program
*
* Description - program with the putchar method
*
*Return: Always 0
*/
int main(void)
{
	char ch;

for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
return (0);
}

