#include "main.h"
/**
 * _sqrt_recursion - returns the value of x raised to the power of y.
 * @x: number to raise
 * @y: number of power
 * Return: calculation result
 */
int _sqrt_recursion(int n)
{
	int temp = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n > 0)
	{
		if ((n * n )== temp)
		{
			return (temp);
		}
		else if ((n * n) != temp)
		{
			return (_sqrt_recursion(n - 1));
		}
		else
		{
			return (-1);
		}
	}
	
}
