#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{

int p = 100;
int i;

i = 1;
while (i <= p)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}

else if (i % 3 == 0)
{
printf("Fizz ");
}

else if (i % 5 == 0)
{
if (i < p)
printf("Buzz ");

else
printf("Buzz");
}

else
{
printf("%i ", i);
}

i++;


}
printf("\n");
return (0);
}
