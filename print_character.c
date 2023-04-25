#include "main.h"

/**
*print_character - prints out a character
*
*@args: parameter
*
*Return: the number of printed characters
*/

int print_character(va_list args)
{
	char ch = (char)va_arg(args, int);
	int cnt = 0;

	if (ch)
	{
		cnt = write(1, &ch, 1);
		return (cnt);
	}
	return (0);
}
