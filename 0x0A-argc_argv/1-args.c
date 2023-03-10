#include <stdio.h>
#include "main.h"

/**
  * main - entry point.
  * @argsc: input.
  * @argsv: input.
  *
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	int num;

	(void)argv;
	num = argc - 1;
	printf("%d\n", num);

	return (0);
}
