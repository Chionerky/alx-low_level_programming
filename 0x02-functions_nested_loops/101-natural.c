#include <stdio.h>

/**
* main - list alll the natural num below 1024excluded
*	that are multiple of 3 or 5
*
* Return: 0
*/
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}

