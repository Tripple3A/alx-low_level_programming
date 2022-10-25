#include "main.h"

/**
  *swap_int - swaps two integers
  *@a: The first integer
  *@b: The second integer
  *Return: Nothing
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
