#include "main.h"

/**
* print_most_numbers - prints 0 -9
*
* Return: to the void
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4)i)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
