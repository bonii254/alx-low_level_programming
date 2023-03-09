#include "main.h"

/**
  *is_prime_number - says if an integer is a prime number or not
  *@n: number to evaluate
  *
  *Return: 1 if n is a prime number, 0 if not
  */

int is_prime_number(int n)
{
	int actual_prime(int i, int j);
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
  *actual_prime - check for prime number.
  *@i: input.
  *@j: input.
  *
  *Return: 1 if prime 0 if not
  */

int actual_prime(int i, int j)
{
	if (j == 1)
		return (1);
	if (i % j == 0)
		return (0);
	return (actual_prime(i, j - 1));
}
