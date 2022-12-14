#include 'main.h"

/**
* _isalpha - checks for alphabets
* @c: character for checks
* Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
