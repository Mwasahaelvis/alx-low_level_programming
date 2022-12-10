#include <stdio.h>
/**
 * main: Entry point
 *Return - 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	float d;
	long long int n;

	/*the sizeof operator returns the sizeof a data type*/
	printf("size of char: %lu bytes\n", sizeof(d));
	printf("size of an int: %lu bytes\n", sizeof(b));
	printf("size of a long int: %lu bytes\n", sizeof(c));
	printf("size of a float type: %lu bytes\n", sizeof(d));
	printf("size of a long long int: %lu bytes\n", sizeof(n));

	return (0);
}
