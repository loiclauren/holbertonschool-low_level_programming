#include "main.h"
/**
 * print_diagonal - print diagonal line
 *
 * @n: no of inputs
 */
void print_diagonal(int n)
{
int h, p;
for (h = 0; h < n; h++)
{
if (n > 1)
for (p = 0; p < h; p++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
