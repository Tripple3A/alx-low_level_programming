#include "main.h"

/**
  *_isalpha- prints lowecase, uppercase and numbers
  *@c:c is an ascii character
  *Return: 1 and 0
  */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
