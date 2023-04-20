#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of two integers
 * @a: first int
 * @b: second int
 *
 * Return: a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the sub of two integers
 * @a: first int
 * @b: second int
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two integers
 * @a: first int
 * @b: second int
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of two integers
 * @a: first int
 * @b: second int
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two integers
 * @a: first int
 * @b: second int
 *
 * Return: a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
