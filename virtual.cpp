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

box::box(box& b)
{
	this->a = b.a;
	this->b = b.b;
}

float box::perimetr()
{
	return (a + b) * 2;
}

pararelo::pararelo()
{
	a = 0;
	b = 0;
}

pararelo::pararelo(float a, float b)
{
	this->a = a;
	this->b = b;
}

pararelo::pararelo(pararelo& p)
{
	this->a = p.a;
	this->b = p.b;
}

float pararelo::perimetr()
{
	return (a+b) * 2;
}

triangle::triangle()
{
	a = 0;
	b = 0;
	c = 0;
}

triangle::triangle(float a, float b, float c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

triangle::triangle(triangle& t)
{
	this->a = t.a;
	this->b = t.b;
	this->c = t.c;
}

float triangle::perimetr()
{
	return a + b + c;
}

trapecia::trapecia()
{
	a = 0;
	b = 0;
	c = 0;
	d = 0;
}

trapecia::trapecia(trapecia& t)
{
	this->a = t.a;
	this->b = t.b;
	this->c = t.c;
	this->d = t.d;
}

trapecia::trapecia(float a, float b, float c, float d)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;

}

float trapecia::perimetr()
{
	return a+b+c+d;
}
