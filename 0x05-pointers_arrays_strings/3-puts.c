#include "main.h"
#include <string.h>
/**
 * _puts() - prints the string
 *
 * Return: string
 */
void _puts(char *str)
{

	while (*str != '\0')
	_putchar(*str++);
	_putchar('\n');
}
