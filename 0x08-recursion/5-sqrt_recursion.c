#include "main.h"
/**
 * _sqrt_recursion - returns the value of x raised to the power of y.
 * helpFun - help in calculation
 * @num: number.
 * @n: number to find sqrt of.
 * @pSqrt: poissible sqrt of number.
 * Return: calculation result
 */
int helpFun(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helpFun(num, pSqrt + 1));

	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helpFun(n, 0));
}
