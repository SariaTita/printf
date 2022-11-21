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
Typedef struct specifiers
{
Char *specifier;
Int(*f)(va_list args);
} spc_dt;
int _printf(const char *format, ...);
#endif /* MAIN_H */
