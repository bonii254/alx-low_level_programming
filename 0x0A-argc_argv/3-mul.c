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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
