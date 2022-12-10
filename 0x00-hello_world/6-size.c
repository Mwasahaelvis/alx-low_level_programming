#include <stdio.h>
/**
 * main - Entry point
 *Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	float d;
	long long int n;

	/*the sizeof operator returns the sizeof a data type*/
	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a float type: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(n));

	return (0);
}
