#include "virtual.h"

box::box()
{
	a = 0;
	b = 0;
}

box::box(float a, float b)
{
	this->a = a;
	this->b = b;
}

float box::perimetr()
{
	return (a + b) * 2;
}
