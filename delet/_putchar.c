#include "main.h"
#include <unistd.h>

/**
 * _putchar- writes the characterc to stdout
 * @c: Character to be printed
 *
 * Return: 1 if success -1 if fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
