#include "main.h"

/**
 *_abs - function that computes the ansolute value of an integer
 *@n:Is the int to be used for th argument function
 * Return: 0 Success
 *
 */
int _abs(int n)
{
if (n > 0 || n == 0)
{
return (n);
}
else
{
return (n * -1);
}
}
