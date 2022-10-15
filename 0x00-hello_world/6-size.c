#include <stdio.h>
/**
 * main - computes sizes of various data types
 *
 *Return: zero
 */
int main(void)
{
	long int b;
	long long int c;
	char a;
	int i;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));

	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(b));

	printf("Size of a long long int: %lu byte(s)\n", sizeof(c));

	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}


