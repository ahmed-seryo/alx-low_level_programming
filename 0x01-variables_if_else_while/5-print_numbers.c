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
		char buffer[11];

		snprintf(buffer, 11, "%d", digit);
		printf("%s", buffer);
		digit++;
	}
	return (0);
}
