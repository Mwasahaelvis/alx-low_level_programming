#include "main.h"

/**
*print_last_digit - prints the last digigt of a number
*@n: the integer to check last digit
*Return: last digit
*/
int print_last_digit(int n);
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
