#include <string.h>
#include <math.h>
#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number to raise
 * @y: number of power
 * Return: calculation result
 */
int _sqrt_recursion(int n)
{
	int x = n - 1;

	if ( n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	if ((x ^ 2) == n)
	{
		return x;
	}
	else if (x ^ 2)
	{
		_sqrt_recursion(n);
	}
	return (-1);
}
