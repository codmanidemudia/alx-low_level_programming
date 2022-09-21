#include "main.h"
#include <stdio.h>
/**
*_strcat - function to concatenate
*@dest: destination
*@src: source
* Return: Always 0.
*/

char *_strcat(char *dest, char *src)
{
int i = strlen(dest), j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
}
