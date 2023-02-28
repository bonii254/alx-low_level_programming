#include "main.h"

/**
 * reset_to_98 - reset value of int using pointer
 * @n: pointer
 */

void reset_to_98(int *n)
{
	int a, *n = &a;
	*n = 98;
}
