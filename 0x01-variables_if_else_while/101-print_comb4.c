#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a,z,s;
	for (a = '0'; a < '8'; a++)
	{
		for (z = a + 1; z < '9'; z++)
		{
			for (s = z + 1; s <= '9' ; s++)
			{

				putchar(a);
				putchar(z);
				putchar(s);

				if (a == '7' && z == '8')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
