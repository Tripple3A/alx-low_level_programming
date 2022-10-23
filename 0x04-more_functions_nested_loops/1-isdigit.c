#include "main.h"

/**
  *_isdigit - checks if the number is in 0 to 9
  *@c: number to be checkes
  *Return: one or zero
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
