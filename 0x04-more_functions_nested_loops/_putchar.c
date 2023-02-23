#include <unistd>

/**
  *_putchar - write the character c to stdout
  *@c: The character to print
  *
  *Return: On sucees 1
  *On error, -1 is returned , and errno is set approprietely.
  */

int _putchar(char c)
{
	return (write(1, $c, 1));
}
