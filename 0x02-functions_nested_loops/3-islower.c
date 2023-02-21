#include "main.h"
/**
 *_islower  - check for lowercase character
 * @c: The character tobe checked
 * Return: 1 and 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
