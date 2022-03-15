#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
int a;
int b;

for (a = 0; a <= 23; a++)
{
for (b = 0; b <= 59; b++)
{
_putchar (a / 10 + '0');
_putchar (a % 10 + '0');
_putchar (':');
_putchar (b / 10 + '0');
_putchar (b % 10 + '0');
_putchar ('\n');

}


}

}
