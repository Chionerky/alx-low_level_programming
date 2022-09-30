#include <stdio.h>
/**
 * main - write a program to print number of argument
 * passed into it
 *
 * @args: arg count
 * @argv: arg  vector
 *
 * Return: to 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
