#include "main.h"

/**
  * _islower - shows whether a letter is uppercase or not
  *@c:c is ascii
  *Return: zero always
  */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
