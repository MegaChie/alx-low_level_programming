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
	int temp = n;
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
	else if ((n ^ 2) == temp)
	{
		return (n);
	}
	else if ((n ^ 2) == temp)
	{
		return (n);
	}
	else if ((n ^ 2) != temp)
	{
		_sqrt_recursion(n - 1);
	}
	else
	{
		return (-1);
	}
}
