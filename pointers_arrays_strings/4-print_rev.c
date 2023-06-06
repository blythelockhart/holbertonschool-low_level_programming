#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
	{
		if (s[index] == '\0')
		{
			break;
		}
		len++;
	}
	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
