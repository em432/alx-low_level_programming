#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/completed)
 */
int main(void)

{
int number_left;
int number_right;


for (number_left = 48; number_right <= 78; number_left++)
{
for (number_right = number_left + 1 ; number_right <= 78; number_right++)
{

putchar(number_left);
putchar (number_right);


if ((number_left == 56) && (number_right == 78))
{
break;
}

putchar(',');
putchar (' ');

}

}

putchar('\n');


return (0);


}
