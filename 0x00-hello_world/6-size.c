#include <stdio.h>

/**
  *main - size of datatype
  *Description: prints the size of various types on the computer it is compiled and run on.
  *Return: return 0 when successful
*/

int main(void)
{
	printf("Size of a char: %c byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(long int));
	printf("Size of a long long int: %lld byte(s)", sizeof(long long int));
	printf("Size of a float: %f byte(s)", sizeof(float));
	return (0);
}
