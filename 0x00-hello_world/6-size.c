#include <stdio.h>

/**
* main -Entry point
*
* Description "prints exactly with proper grammar
* Return: Always 0 (sucess)
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	
	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Siza of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ldbyte(s)\n", sizeof(lli));
	printf("Size of a float: %ldbyte(s)\n", sizeof(f));
	return (0);
}
