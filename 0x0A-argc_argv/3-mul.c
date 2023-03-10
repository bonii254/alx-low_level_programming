#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point.
  * @argc: input.
  * @argv: input.
  *
  * Return: 0 on success 1  if error occors.
  */

int main(int argc, char *argv[])
{
	long int mul, num1, num2;

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = num1 * num2;
	printf("%ld\n", mul);

	return (0);
}
