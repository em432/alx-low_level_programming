#include "main.h"


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On sucess/correct 1.
 * On error, returne an error
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
