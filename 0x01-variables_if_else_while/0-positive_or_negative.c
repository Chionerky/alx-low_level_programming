#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints if the number is positive, negative, or zero
*
* Description: usin the main function
* Return: Always 0 (success/correct)
*/
int main (void)
{
int n;

Srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
return (0);
}
