#include "main.h"

/**
* _abs - computes the absolute value of an integer.
* @n : integer to compute the absolute value for.
*
* return : The absolute value of the integer.
*/

int	_abs(int n)
{
	if (n < 0)
	{
		n *= (-1);
		return (n);
	}
	else
		return (n);
}
