#include <stdlib.h>
#include <stdio.h>

/**
  *main - entry to program
  *Description: two combination of sigle digits
  *Return: 0 successfull
*/

int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			if (a != b && a < b)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
