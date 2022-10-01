

#include "main.h"
/**
 *_isalpha - function to check if c is a letter, lower or uppercase
 *@c:Is the int to be used for th argument function
 * Return: 0 Success
 *
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
