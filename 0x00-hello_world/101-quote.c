#include <unistd.h>

/**
  *main - printing a string followed by a standard eror
  *Return: 1 always
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19",
			59);
	return (1);
}
