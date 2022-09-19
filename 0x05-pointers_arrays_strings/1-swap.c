#include "main.h"

/**
* swap_int - functions swap two integer value
* @a: first integer
* @b: second integer for sawp
*
* Return: void
*/
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
