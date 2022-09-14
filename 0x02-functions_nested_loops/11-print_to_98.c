#include "main.h"

/**
* print_to_98 - prints all natural nums input-98
*	in order by separeted comma, folloed by space
*@n: the number to begin with
*/
void print_to_98(int n)
{
	if  (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}


