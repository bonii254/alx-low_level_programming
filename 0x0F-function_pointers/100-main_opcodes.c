#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that prints the opcodes of its own main function.
  * @argc: number of user passed arguements.
  * @argv: pointer to the string passed by the user.
  *
  * Return: 0 on succes.
  */

int main(int argc, char *argv[])
{
	int num1;
	int i = 0;
	char  *po;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num1 = atoi(argv[1]);
	if (num1 < 0)
	{
		printf("Error\n");
		exit(2);
	}

	po = (char *) main;

	while (i < num1)
	{
		if (i == num1 - 1)
		{
			printf("%02hhx\n", *(po + i));
			break;
		}
		printf("%02hhx ", *(po + i));
		i++;
	}
	return (0);
}
