#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - a function that produces output according to a format
 * @format: character string
 * Return:the number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int length = 0;
if (format == NULL)
return (-1);
va_start(args, format);
length = _print_format(format, args);
va_end(args);
return (length);
}

