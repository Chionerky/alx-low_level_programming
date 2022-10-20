#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print the sum of two
* diagonal of sqr matrix
*
* @a: the matrix
* @size: the size
* Return: nothing
*/
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 10)];
	}

	printf("%d, %d\n", sum1, sum2);
}

