#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - check if the variable stores a positive or negative number
  *Return: return zero if successfull
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", &n);
	else if (n < 0)
		printf("%d is negative", &n);
	else
		printf("%d is zero", &n);
	return (0);
}
