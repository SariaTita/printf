#include "prinf.h"
/**
 * _printf - character string
 * @format: string whit format to print
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

