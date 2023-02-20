#include <stdio.h>

/**
  *main - size of datatype
  *Description: prints the size of various types on the computer it is 
  *compiled and run on.
  *Return: return 0 when successful
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (iunsigned long)sizeof(a));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
	
	return (0);
}
