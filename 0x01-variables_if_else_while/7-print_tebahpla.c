#include <unistd.h>
#include <stdio.h>
/**
  *main - Entry 
  *Description: print lowercase
  *Return: zero
  */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
