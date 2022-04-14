#include "main.h"
/**
 * _isdigit - check if a character is a digit
 *
 *@c: the characacter checked
 *
 *Return: 1 if it is a digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
