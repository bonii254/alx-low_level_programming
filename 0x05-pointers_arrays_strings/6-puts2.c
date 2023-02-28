#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * starting with the first one
 * @str: input
 */

void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	i = length - 1;
	for (o = 0; o <= i; o++)
	{
		if(o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
