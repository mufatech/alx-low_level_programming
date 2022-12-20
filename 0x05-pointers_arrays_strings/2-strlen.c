#include "main.h"
/**
 * _strlen - return the length of a string
 * written by mufatech
 * @s: char to check
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
