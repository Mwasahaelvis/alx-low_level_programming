#include <stdio.h>

/**
 * main -entry point
 * Return: 0
 */
int main(void)
{
	int kar;

	for (kar = 'a'; kar <= 'z'; kar++)
		putchar(kar);
	for (kar = 'A'; kar <= 'Z'; kar++)
		putchar(kar);
	putchar('\n');
	return (0);
}
