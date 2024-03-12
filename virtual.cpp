#include "virtual.h"

Square::Square()
{
	a = 0;
}

Square::Square(float a)
{
	this->a = a;
}

float Square::calcArea()
{
	return a * a;
}
