#include "main.h"
/**
* _isupper - check if a letter is uppercase or no
*
*@c: character to be tested
*
*Return: 1 if uppercase else 0 (false)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
