#include "main.h"
/**
 * _isdigit - checks if character digit
 * @c: Variable text
 * Return: Always 0
 */
int _isdigit(int c)
{

	char c;

	switch (c)
	{

	case '0':
	       _putchar("%c: %d\n", c);
		break;
	case 'a':
		_putchar("%c: %d\n", c);
		break;
	default:
		_putchar("\nIncorrect input");
		break;
	}
	return (0);
}
