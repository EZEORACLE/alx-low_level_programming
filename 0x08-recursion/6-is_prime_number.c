#include"main.h"
/**
 * _isitprime - looks for prime
 * @n: the number
 * @i: the number / 2
 * Return: 1 if prime, 0 if not
 */
int_is_prime(int n, int i)
{
if (i == 1)
{
return (1);
}
else
{
if (n % i == 0)
return (0);
else
return (is_prime(n, i - 1));
}
}
/**
 * is_prime_number - looks for prime
 * @n: the number
 * Return: 1 if orime, 0 if not
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
if (n % 2 == 0)
return (0);
else
return (is_prime(n, n / 2));
}
