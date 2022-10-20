#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arg a program receives
 *
 * @argv: array of arg
 * @argc: arg count
 *
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
