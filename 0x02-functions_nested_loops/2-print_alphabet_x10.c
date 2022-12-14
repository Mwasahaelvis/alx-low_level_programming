#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets
 * prog ends with a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar("\n");
		i++;
	}
}
