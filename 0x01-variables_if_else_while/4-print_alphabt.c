#include <stdio.h>

/**
  *main - print lowercase alphabet ommiting q and e
  *Return: 0 successfull
*/

int main(void)
{
	char lwr;

	for (lwr = 'a'; lwr <= 'z'; lwr++)
	{
		putchar(lwr);
		if (lwr == 'q' || lwr == 'e')
			continue;
	}

	putchar('\n');
	return (0);
}
