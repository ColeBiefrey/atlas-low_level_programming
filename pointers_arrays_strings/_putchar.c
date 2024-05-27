#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character to stdout
 * @c: The char to print
 * Return: On success 1
 * On error, -1, and error is set
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
