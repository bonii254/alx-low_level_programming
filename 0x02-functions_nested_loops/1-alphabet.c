#include "main.h"

/**
  *print_alphabet - print alphabet in lowercase
*/

void print_alphabet(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		_putchar(lc);
		lc++;
	}
	_putchar('\n');
}
