#include "main.h"

/**
* _islower - checks if inputs is lower.
* @c: the character to be checked
*
* Return: 1 if chatacter is lowercase, 0 otherwise.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

