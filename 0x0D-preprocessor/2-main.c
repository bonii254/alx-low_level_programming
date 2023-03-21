# include "main.h"

/**
  * main - entry point.
  *
  * Return: Always 0 on success
  */

int main(void)
{
	int i = 0;

	while (__FILE__[i] != '\0')
		_putchar('%c', __FILE__[i]);
	_putchar('\0');
	_putchar('\n');
	return (0);
}
