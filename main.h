#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int (*check_func(const char *))(va_list);
int print_character(va_list);
int print_string(va_list);
int print_percentage(va_list);

/**
*struct funct - struct for format
*
*@f: the function pointer
*/

typedef struct funct
{
	char *type_ar;
	int (*f)(va_list);
} funct_t;


#endif
