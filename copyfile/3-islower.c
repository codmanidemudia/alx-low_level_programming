#include "main.h"
/**
 * _islower - function to check for lowercase character
 *@c:Is the int to be used for th argument function
 * Return: 1 if true and 0 if false
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
