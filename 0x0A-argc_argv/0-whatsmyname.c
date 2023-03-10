#include <stdio.h>
#include "main.h"

/**
  * main - entry point.
  * @argc: argument count.
  * @argv: argument array
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
