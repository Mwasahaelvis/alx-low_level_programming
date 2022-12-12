#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char kar = 'a';

	while (kar <= 'z')
	{
		if (kar != 'e' && kar != 'q')
		{
			putchar(kar);
		}
		kar++;
	}
	putchar('\n');
	return (0);
}

