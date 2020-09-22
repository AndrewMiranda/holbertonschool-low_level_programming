#include "holberton.h"
#include <stdio.h>

/**
 * int _abs(int) - absolute value of an integer.
 *
 * Return: Always 0.
 */

int _abs(int a)
{
if (a > 0)
{
return (a);
}
else if (a < 0)
{
a = a * -1;
return (a);
}
else
{
return (a);
}
}
