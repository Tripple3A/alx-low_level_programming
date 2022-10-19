#include <stdio.h>
#include <unistd.h>

/**
  *main - Entry point
  *Description: prints base numbers of digits
  *Return: zero
  */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
