#include "main.h"

/**
 * print_alphabet - function called by main
 *
 * Description: Write a function that prints the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: Always return 0 (Success)
 */

void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
