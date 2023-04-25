#include "main.h"

/**
*check_func - checks the format specifiers
*
*@fmat: the type of specifier
*
*Return: a pointer
*/

int (*check_func(const char *fmat))(va_list)
{
	funct_t my_arr[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_percentage},
		{NULL, NULL}
		};

	int i = 0;

	while (my_arr[i].type_ar != NULL)
	{
		if (*(my_arr[i].type_ar) == *fmat)
			return (my_arr[i].f);
		i++;
	}
	return (0);
}
