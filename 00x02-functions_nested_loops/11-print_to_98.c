#include "main.h"
#include <stdio.h>

/**
* print_to_98 -  prints all natural numbers from n to 98
*  @n : the starting number.
*  return : none
*/

void	print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d" ,n);
			if (n > 98)
				printf(", ");
			n--;
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
