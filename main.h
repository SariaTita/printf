#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* struct specifiers - struct specifiers
* @specifier: the conversion specifier
* @f: the function pointer
**/
typedef struct specifiers
{
char *specifier;
int (*f)(va_list args);
} spc_dt;
int _printf(const char *format, ...);
int _print_format(const char *format, va_list args);
#endif /* MAIN_H */
