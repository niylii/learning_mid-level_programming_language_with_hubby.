#include <stdio.h>

/**
* main - entry point of the program.
* Return : always 0 (Success)
*/

int	main(void)
{
	int	n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
