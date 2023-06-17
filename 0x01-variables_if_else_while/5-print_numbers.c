#include <stdio.h>
/**
 * main - entry point
 * Descrption: make numbers from 0-9
 * Return: 0
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d\n", digit);
		digit++;
	}
	return (0);
}
