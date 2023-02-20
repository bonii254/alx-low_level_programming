#include <stdio.h>

/**
  *main - print lower and uppercase of alphabet
  *Return: 0 successfull
*/

int main(void)
{
	char lwr;
	char uppr;

	for (lwr = 'a'; lwr <= 'z'; lwr++)
		putchar(lwr);
	for (uppr = 'A'; uppr <= 'Z'; uppr++)
		putchar(uppr);
	putchar('\n');

	return (0);
}
