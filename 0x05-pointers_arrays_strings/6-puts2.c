#include "main.h"

/**
  *puts2 - function prints every other character
  *
  *@str: pointer parameter of function
  *
  *Return: nothing
  */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			{
			}
		i++;
	}
	_putchar('\n');
}
