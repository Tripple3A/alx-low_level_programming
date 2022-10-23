#include "main.h"

/**
  *more_numbers - printing ten times the numbers
  *Return: zero
  */
void more_numbers(void)
{
	int a;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c <= 9)
			{
				_putchar('0' + c);
			}
			else
			{
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);
			}
		}
		_putchar('\n');
	}
}

