#include "main.h"
/**
 *print_to_98 - print all natural number from input to 98 follow
 * by comma and space
 *@n: the number to  begin counting
 * Return: no return
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
