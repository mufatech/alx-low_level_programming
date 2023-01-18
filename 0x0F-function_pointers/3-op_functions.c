#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function to perform addition
  * @a: num1
  * @b: num2
  *
  * Return: 0
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function to perform subtraction
  * @a: num1
  * @b: num2
  *
  * Return: 0
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function to perform multiplication
  * @a: num1
  * @b: num2
  *
  * Return: 0
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function to perform division
  * @a: num1
  * @b: num2
  *
  * Return: 0
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function to perform modulo
  * @a: num1
  * @b: num2
  *
  * Return: ...
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
