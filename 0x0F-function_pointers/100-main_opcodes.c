#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that prints the opcodes of its own main function.
  * @arg: number of user passed arguements.
  * @argv: pointer to the string passed by the user.
  *
  * Return: 0 on succes.
  */

int main(int arg, char *argv[])
{
	int num1;
	int i = 0;
	unsigned int *po = (unsigned int *) main;

	if (arg != 2)
	{
		printf("error\n");
		exit(1);
	}

	num1 = atoi(argv[1]);
	if (num1 < 0)
	{
		printf("error\n");
		exit(2);
	}

	while (i < num1)
	{
		printf("%02x ", *(po + i));
		i++;
	}
	printf("\n");
	return (0);
}
