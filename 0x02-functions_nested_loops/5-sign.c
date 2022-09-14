#include "main.h"
/**
 *print_sign - function to check for sign of a number
 *@n:Is the int to be used for th argument function
 * Return: 0 Success
 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n ==  0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
