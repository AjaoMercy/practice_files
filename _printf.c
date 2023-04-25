#include "main.h"

/**
*_printf -  produces output according to a format
*
*@format: a character string
*
*Return:  the number of characters printed
*/

int _printf(const char *format, ...)
{
	int i = 0;/*iterator*/
	int count = 0;/*to count the no of character printed*/
	int value = 0;/*saves the numbers when counting*/

	va_list args;
	va_start(args, format);

	int (*f)(va_list);

	/*checks if the string is NULL*/
	if (format == NULL)
	{
		return (-1);
	}

	while (format[i])
	{
		if (format[i] != '%')/*checks if there is no % character*/
		{
			/*prints and counts each character in the string*/
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue;/*go back to the loop after executing this*/
		}
		if (format[i] == '%')/*if the nth index of format is a specifier*/
		{
			f = check_func(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count = count + value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count = count + value;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}
