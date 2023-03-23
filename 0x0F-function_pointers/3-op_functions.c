#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - return sum of input.
  * @a: input.
  * @b: input.
  *
  * Return: sum.
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - return sub of input.
  * @a: input.
  * @b: input.
  *
  * Return: sub
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - return mul of input.
  * @a: input.
  * @b: input.
  *
  * Return: mult
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - return div of input.
  * @a: input.
  * @b: input.
  *
  * Return: mult
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - return mod of input.
  * @a: input.
  * @b: input.
  *
  * Return: mult
  */

int op_mod(int a, int b)
{
	return (a % b);
}
