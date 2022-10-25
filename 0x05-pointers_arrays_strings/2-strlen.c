#include <stdio.h>
#include "main.h"
/**
  *_strlen - returns the length of the string
  *@s: the pointer to the string
  *Return: an integer
  */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
