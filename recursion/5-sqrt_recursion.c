#include "main.h"

/**
 * check_sqrt - Returns the natural square root of a number.
 * @x: same number as n
 * @y: iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int check_sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (check_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of n.
 * @n: Number Integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (check_sqrt(n, 1));
}
