#include <stdio.h>

/**
  *main - size of datatype
  *Description: prints the size of various types on the computer it is compiled and run on.
  *Return: return 0 when successful
*/

int main(void)
{
	printf("\n Size of a char: %lu byte(s)", sizeof(char));
	printf("\n Size of an int: %lu byte(s)", sizeof(int));
	printf("\n Size of a long int: %lu byte(s)", sizeof(long int));
	printf("\n Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("\n Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
