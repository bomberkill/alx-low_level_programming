#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character mot to stdout
 * @mot: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void) 
{
/*return 0 (success)*/
	char mot[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(mot[i]);
	_putchar('\n');

	return (0);
}
