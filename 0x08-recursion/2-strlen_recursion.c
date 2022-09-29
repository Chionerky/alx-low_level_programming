#include "main.h"

/**
* _strlen_recursion - returns str lenght
* @s: pointer to str
*
* Return: length of str
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}

	else
	{
		return (0);
	}
}
