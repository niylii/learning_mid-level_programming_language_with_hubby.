#include "main.h"

/**
* print_alphabet - prints alphabet in lowercase
*
* return : nothing 
*/

void	print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
