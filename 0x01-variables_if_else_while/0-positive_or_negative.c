#inlide <stdlib.h>
incude <time.h>
include <stdio.h>

/**
 * main - prints the last digit of a randomly generated number and whether it is greater than 5, less than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there */ 

if (n > 0)
{
	printf("%d is positive\", n);
}
else if (n < 0)

	printf("%d is negative\", n);
else
	printf("%d is zero\",n);
return (0);
} 
