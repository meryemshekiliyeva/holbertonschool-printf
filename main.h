#ifndef HEADER
#define HEADER

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int print_string(char *ptr);
int print_number(int num);
int _printf(const char *format, ...);
int print_binary(unsigned int n);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);
int print_hex_lower(unsigned int n);
int print_hex_upper(unsigned int n);

#endif
