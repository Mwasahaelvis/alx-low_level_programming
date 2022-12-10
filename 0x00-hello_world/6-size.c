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
	printf("size of char: %d byte(s)\n", sizeof(a));
	printf("size of an int: %d byte(s)\n", sizeof(b));
	printf("size of a long int: %d byte(s)\n", sizeof(c));
	printf("size of a float type: %d byte(s)\n", sizeof(d));
	printf("size of a long long int: %d byte(s)\n", sizeof(n));

	return (0);
}
