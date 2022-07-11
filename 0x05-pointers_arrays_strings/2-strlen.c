#include <stdio.h>

/**
 * @s: this is the input string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\10' ; index);

	return (index):
}
