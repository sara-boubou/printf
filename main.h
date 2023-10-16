#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_rev(va_list r);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);
int (*driver(char *format))(char *format, va_list);
int _printf(const char *format, ...);
int _putchar(char ch);
/**
* struct code_format - structure format
* @sc: specifier
* @f: function associated
*/
typedef struct code_format
{
char *sc;
int (*f)(va_list);
} code_f;
#endif
/**
the end of the team project */
