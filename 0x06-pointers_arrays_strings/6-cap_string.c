#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string value
*
* Return: returns length as int
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
* cap_string - function that capitalizes first character
* of a word
* @str: string to capitalize
*
* Return: returns caps string
*/

char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a') && (str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}')
			str[index] -= 32;
	}

	return (str);
}
