#include "main.h"

/**
 * Write a function that prints a string, followed by a new line.
 * printString("hello");
 */
void _puts_recursion(char *s)
{
	_puts_recursion("hello");
	putchar(*s);
	s = s + 1;

	putchar(*s);
	s = s + 1;
	putchar(*s);
	s = s + 1;
	putchar(*s);
	s = s + 1;
	putchar(*s);
	s = s + 1;
}
