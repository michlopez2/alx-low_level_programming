#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number whose last digit needs to be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last;

/* Calculate the last digit */
last = n % 10;

if (last < 0)
{
/* Make the last digit positive */
last = -last;
}

/* Print the last digit */
_putchar(last + '0');

/* Return the last digit */
return (last);
}

