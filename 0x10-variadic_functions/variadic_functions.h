#ifndef _VAGRANT_H_
#define _VAGRANT_H_
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
