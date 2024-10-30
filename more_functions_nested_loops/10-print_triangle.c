#include "main.h"
/**
 * print_triangle - Prints a triangle of a given size using `#`.
 * @size: The height of the triangle.
 *
 * Description: If size is 0 or less, the function just prints a new line.
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 1; i <= size; i++)
{
for (j = 0; j < size - i; j++)
_putchar(' ');
for (k = 0; k < i; k++)
_putchar('#');
_putchar('\n');
}
}
