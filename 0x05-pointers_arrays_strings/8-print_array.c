#include "main.h"
#include <stdio.h>

/**
* print_array - prints n element of an
* array of integer
* @a: Array of integer
* @n: numner of element
*
* Return: void
*/
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
