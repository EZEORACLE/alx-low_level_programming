<<<<<<< HEAD
#include"main.h"

/**
*print_last_digit - Prints the last digit of a number.
*@n: The number in question.
*
*Return: Value of the last digit.
*/
intprint_last_digit(int n)
{
int last_digit = n % 10;

if (last_digit < 0)
last_digit *= -1;

_putchar(last_digit + '0');

return (last_digit);
=======
#include "main.h"
/**
 *print_last_digit - Prints the last digit of a number.
 *@n: The number in question.
 *
 *Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0);
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
>>>>>>> 88935b0fda272d881bc53478902df3d6511c5c73
}
