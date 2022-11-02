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
	int temp = 0;
	if (n == 1)
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
	else if ((temp ^ 2) == n)
	{
		return (temp);
	}
	else if ((temp ^ 2) != n)
	{
		return (_sqrt_recursion(temp + 1));
	}
}
