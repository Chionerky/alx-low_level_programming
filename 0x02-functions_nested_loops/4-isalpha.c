#include "main.h"

/**
* _isalpha - checks if a character is a letter
* @c: the to br checked
*
* Return: 1 if character is letter, 0 therwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
		return (1);
	else
		return (0);
}

