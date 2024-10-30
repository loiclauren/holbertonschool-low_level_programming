#include "main.h"
/**
* _isupper - Checks if a character is uppercase.
* @c: the character to check, given as an integer (ASCII code).
* Return: 1 if c is uppercase, 0 otherwise.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
