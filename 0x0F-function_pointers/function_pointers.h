#ifndef _FUNCTION_H_
#define _FUNCTION_H_
void print_name(char *name, void (*f)(char *));

#include <libio.h>
void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
int _putchar(char c);
#endif