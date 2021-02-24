#include "holberton.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 *find_sqrt- finds the natural square root of a number
 *@num: number to find the square root for
 *@root: the root to be tested
 *
 *Return: square root if it has natural square root if not return -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if  (root == (num / 2))
	{
		return (-1);
	}

	return (find_sqrt(num, root + 1));
}

/**
 *_sqrt_recursion- returns the natural square root of a number
 *@n: the number to return the square root of
 *
 *Return: square root if it has natural square root if not return -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, root));
}
