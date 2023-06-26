#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @i: Integer
 * @j: Power
 * Return: On success 1.
 * On error: -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int i, int j)
{
	if (j < 0)
		return (-1);
	if (j == 0)
		return (1);
	return (i * _pow_recursion(i, j - 1));
}
