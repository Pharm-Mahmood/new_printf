#include "main.h"
/**
 * string_printing - prints string in place of s.
 * @schara: list of arguments
 *
 * Return: number of characters printed
 */
int string_printing(va_list schara)
{
	int lnth;
	char *a;

	a = va_arg(schara, char *);
	if (a == NULL)
	{
		a = "(null)";
	}
	for (lnth = 0; a[lnth] != '\0'; lnth++)
		_putchar(a[lnth]);

	return (lnth);
}
