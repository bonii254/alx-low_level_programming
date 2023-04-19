#include "3-calc.h"

/**
  * op_add - returns the sum of a and b
  * @a: input.
  * @b: input.
  *
  *Return: sum of a and b on success.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns the difference of a and b
  * @a: input.
  * @b: input.
  *
  * Return: the difference of a and b on success
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns the product of a and b.
  * @a: input.
  * @b: input.
  *
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns the result of the division of a by b
  * @a: input.
  * @b: input.
  *
  * Return:  division of a by b.
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod -  returns the remainder of the division of a by b
  * @a: input.
  * @b: input.
  *
  * Return: remainder of the division of a by b.
  */
int op_mod(int a, int b)
{
	return (a % b);
}
