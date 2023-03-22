#include "main.h"

/**
 * print_sign - This function prints the sign of a number
 *
 * @n: The parameter for the function
 *
 * Return: Always return 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
