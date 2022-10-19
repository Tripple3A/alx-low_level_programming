#include <stdio.h>

/**
  *main - entry
  *
  *The code prints alphabet in upper and lower cas
  *Return:zero
  */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
