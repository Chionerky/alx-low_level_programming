#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the char cto stdout
* @c: the char input
*
* Return: 1 on success
* On error, -1 and error set
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
