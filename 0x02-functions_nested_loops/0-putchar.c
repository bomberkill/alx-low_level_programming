#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
	char mot[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(mot[i]);
	_putchar('\n');

	return (0);
}
