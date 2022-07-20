#include "main.h"

/**
*_puts_recursion - prints a string, followed by new line
*@s: character to be printed
*Return void
*/

void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}	
}
