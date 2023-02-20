#include <stdio.h>

/**
  *main - print hexadecimals in lowercase
  *Return: 0 successfull
*/

int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
