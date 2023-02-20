#include <stdio.h>

/**
  *main - print single digits using variable of type int
  *Return: 0 successfull
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
