#include "main.h"

/**
*main - test file
*
*Return: always zero
*/

int main(void)
{
	int c_std = 0;
	int c_hmd = 0;

	write(1, "STANDARD:\n", 10);
	c_std = printf("my score is an: %c\n", 'A');
	printf("printed %d characters\n", c_std);

	printf("_____________\n");

	write(1, "HOMEMADE:\n", 10);
	c_hmd = _printf("my score is an: %c\n", 'a');
	printf("printed %d characters\n", c_hmd);

	return (0);
}
