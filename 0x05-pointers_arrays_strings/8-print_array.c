#include <stdio.h>
#include "holberton.h"

/**
* print_array - Function
* @a: parameter
* @n: parameter
* Return: void
*/

void print_array(int *a, int n)
{
	int cont = 0;
	int i = 0;

	if (a[0] != '\0')
	{
		while (a[i] != '\0')
		{
			i++;
		}

			if ((n - 1) != i)
			{
				while (cont < n)
				{
					if (cont != (n - 1))
					{
						printf("%d, ", a[cont]);
					}
					else
					{
						printf("%d", a[cont]);
					}
					cont++;
				}
				_putchar('\n');
			}
			else if (n != i)
			{
				printf("\n");
			}
	}
}
