#include "main.h"
/**
  *_puts_recursion-printing words
  **@s:pointer to the characters
  *Return: void or zero
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
