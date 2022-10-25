#include "main.h"

/**
  *print_rev - prints in reverse
  *@s: to be prnted in reverse
  *Return: zero
  */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
