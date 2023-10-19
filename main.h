#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * format - for symbols nd their functions
 * @symbol: is the symbol for the function
 * @func: is the function in the list given
 */

typedef struct format
{
	char *sym;
	int (*func)(va_list);
} forma_t;


int _putchar(char c);
int cpercent_printing(__attribute__((unused))va_list list);
int char_print(va_list schar);
int print_number(va_list args);
int string_printing(va_list schara);
int _printf(const char *format, ...);
int interg_printing(va_list list);
int format_specifier(const char *format, forma_t func_list[], va_list arg_list);

#endif
