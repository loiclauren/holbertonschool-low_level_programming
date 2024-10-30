#include "main.h"
/**
 * print_most_numbers - print 0 to 9
 * except for 2 and 4.
 */
void print_most_numbers(void)
{
int nz;
for (nz = 0; nz <= 9; nz++)
{
if (nz != 2 && nz != 4)
{
_putchar(nz + '0');
}
}
_putchar('\n');
}
