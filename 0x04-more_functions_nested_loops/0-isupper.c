#include "main.h"

/**
  *_isupper - mentions whether it is a cap[ital or small letter
  *@c: character to be checked
  *Description: function returns 1 or 0
  *Return: zero
  */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
