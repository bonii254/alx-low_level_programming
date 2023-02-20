#include <stdio.h>

/**
  *main - print lower case of alphabet using puts
  *Return: 0 always
*/

int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar (chr);
	putchar('\n');

	return (0);
}
