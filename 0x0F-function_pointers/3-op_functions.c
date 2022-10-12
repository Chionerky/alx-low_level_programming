#include "3-calc.h"
/**
* op_add - return the sum of 2 numbers.
* @a: int
* @b: int
*
* Return: sum.
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - difference of 2 int numbers
* @a: int
* @b: int
*
* Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - products of 2 nums
* @a: int
* @b: int
*
* Return: product
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - calc the quotient of 2 nums.
* @a: int
* @b: int
*
* Return: quotient
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - the remainder of divison
* @a: int
* @b: int
*
* Return: the modulus
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
