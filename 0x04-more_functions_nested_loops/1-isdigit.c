#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: char to be checked
 * Return: 1 if true otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
