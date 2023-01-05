#include "main.h"

/**
* _lenght - checks the length of a string
* @s: the string
* Return: the lenght of the str
**/
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}

/**
* checkp - checks if the string is plaindrome
* @i: is the index
* @lg: lenght of string
* @s: the string
* Return: 1 if is paliindrome or 0 is not
**/
int checkp(int i, int lg, int s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
			return (checkp(i + 1, lg - 1, s));
	}
	else if (s[i] != s[lg])
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
return (1);
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: is the string
* Return: returns 1 if the str is a palindrome or 0 otherwise
**/
int is_palindrome(char *s)
{
	return (checkp, _lenght(s) - 1, s);
}
