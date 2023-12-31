#include "main.h"

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion -   natural square root of a number.
 * @n: number.
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper -   find sqr.
 * @n: number.
 * @i: iterator.
 *
 * Return: sqrt
 */

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (_sqrt_helper(n, i + 1));
}
