#include "main.h"
/**
<<<<<<< HEAD
 * print_last_digit - print last digit of a number
 * @c: integer
 *
 *
 * Return: last digit
=======
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
>>>>>>> 1bb0d1717ec60fa474786754870e5be5c46134cb
 */
int print_last_digit(int c)
{
<<<<<<< HEAD
	c = c % 10;

	if (c < 0)
	{
		c = c * -1;
	}
	_putchar('0' + c);
	return (c);
=======
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
>>>>>>> 1bb0d1717ec60fa474786754870e5be5c46134cb
}
