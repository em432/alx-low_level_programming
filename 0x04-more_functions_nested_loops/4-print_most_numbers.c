#include "main.h"
/**
 * print_most_numbers - print numbers
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{

int i;

i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
{
_putchar (i + '0');
}
i++;
}

_putchar ('\n');
}
