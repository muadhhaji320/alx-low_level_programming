#include "main.h"

/**
 * Write a function that prints a string, followed by a new line.
 * printString("hello");
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_puts_recursion("Puts with recursion\n",*s);
		ch++;
	}
}
