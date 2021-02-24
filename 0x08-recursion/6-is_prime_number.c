#include "holberton.h"

/**
 *check_divis- check divisablity
 *@n:number to be checked
 *@i:the divisor
 *Return: 1 if the input integer is a prime number, otherwise returns 0
 */
int check_divis(int n, int i)
{
	if (n < 2 || n % i == 0)
	{
		return (0);
	}
	else if (i > n / 2)
	{
		return (1);
	}
	else
	{
		return (check_divis(n, i + 1));
	}
}
/**
 *is_prime_number- check if a number is prime
 *@n: the number to be checked
 *Return: 1 if the input integer is a prime number,otherwise returns 0
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (check_divis(n, 2));
}

