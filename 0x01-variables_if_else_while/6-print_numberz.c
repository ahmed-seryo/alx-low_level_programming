#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: print 0-9 using putchar while using int variable
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
