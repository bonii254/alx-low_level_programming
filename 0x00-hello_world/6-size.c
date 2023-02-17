#include <stdio.h>
/*
 * main - a C program that prints the size of various types on the computer it is compiled and run on.
 * Result: 0
 */
int main(void)
{
	printf("Size of char: %zu bytes(s)\n", sizeof(char));
	printf("Size of int: %zu bytes(s)\n", sizeof(nt));
	printf("Size of long int : %zu bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
