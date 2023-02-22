#include "main.h"

/**
  *print_last_digit - print last digit of a number
  *@i: value which its last digit is printed
  *Return: return value of last digit
 */

int print_last_digit(int i)
{
	int ld = i % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
