#include <stdio.h>

/**
  *main - print all possible combination of single digit numbers
  *Return: 0 successfull
*/

int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	return (0);
}
