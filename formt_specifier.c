#include "main.h"
/**
 * formt_specifier - determines a place holder depending on the char next to %.
 * @x: a pointer to the format specifier.
 *
 * Return: the address of the placeholder selected.
 */

int format_specifier(const char *format, forma_t func_list[], va_list arg_list)
{
	int i, j, r_val, chars;

	chars = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main string*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right function*/
			for (j = 0; func_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == func_list[j].sym[0])
				{
					r_val = func_list[j].func(arg_list);
					if (r_val == -1)
						return (-1);
					chars += r_val;
					break;
				}
			}
			if (func_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					chars = chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_putchar(format[i]); /*call the write function*/
			chars++;
		}
	}
	return (chars);
}
