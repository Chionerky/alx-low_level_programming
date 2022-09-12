#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Prints the number to int if positive, negative 0r zero
*
* Desription: using the main fuction 
*
* Return: Always 0 
*/ 
int main(void) 
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0}
{
	printf("%d is zero\n", n);
}
else if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}

