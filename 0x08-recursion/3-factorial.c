#include "main.h"

/**
* factorial - returns factorial of a given num
* @n: num to find factorial
*
* Return: factorial num
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
