#include "main.h"
/**
 * main - to fid the absolute value of an integer
 * Return 0 (Success)
 */
int _abs(int a)
{
	if (a < 0)
		a= -(a);
	else if (a >= 0)
		a= a;
	return (a);
}
