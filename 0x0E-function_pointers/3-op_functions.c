#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - addition
 * @a: integer
 * @b: integer
 * Return: sum upon success
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: integer
 * @b: integer
 * Return: diff upon success
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: integer
 * @b: integer
 * Return: total upon success
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: integer
 * @b: integer
 * Return: div upon success
 **/
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - modulus
 * @a: integer
 * @b: integer
 * Return: remainder upon success
 **/
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
