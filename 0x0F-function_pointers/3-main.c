#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"


/**
  * main - a simple calculator.
  * @arg: number of arguement.
  * @argv: value at arguements index i.
  *
  * Return: 0 on success.
  */

int main(int arg, char *argv[])
{
	int num1, num2, result;
	char *operator;

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (arg != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
