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
		if (lwr == 'q' || lwr == 'e')
			continue;
		putchar(lwr);
	}

	putchar('\n');
	return (0);
}
