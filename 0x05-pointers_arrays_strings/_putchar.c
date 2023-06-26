#include <unistd.h>

/**
 * _putchar - writes charachters c to stdout
 * @c: the charachter to print
 *
 * return: on success 1
 * on error, -1 is returned, and erroris set appropritely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
