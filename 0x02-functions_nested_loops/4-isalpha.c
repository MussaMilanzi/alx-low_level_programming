#include "main.h"
/**
 * _isalpha - Check for alphabetic character
 * @c: The character tobe checked
 * Return: 1 and 0
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
