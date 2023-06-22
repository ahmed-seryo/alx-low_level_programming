#include "main.h"

/**
 * _isdigi - check if a charachter is digit
 * @x: the number to be checked
 * Return: 1 for a charachter that will be a digit or 0 for eny else
 */

int _isdigit(int x)
{
	if (x >=48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
