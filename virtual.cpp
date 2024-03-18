#include "virtual.h"

rectangle::rectangle()
{
	a = 0;
	b = 0;
}

rectangle::rectangle(float a, float b)
{
	this->a = a;
	this->b = b;
}

rectangle::rectangle(rectangle& b)
{
	this->a = b.a;
	this->b = b.b;
}

float rectangle::perimetr()
{
	return (a + b) * 2;
}

paralelo::paralelo()
{
	a = 0;
	b = 0;
}

paralelo::paralelo(float a, float b)
{
	this->a = a;
	this->b = b;
}

paralelo::paralelo(paralelo& p)
{
	this->a = p.a;
	this->b = p.b;
}

float paralelo::perimetr()
{
	return (a + b) * 2;
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

trapeze::trapeze()
{
	a = 0;
	b = 0;
	c = 0;
	d = 0;
}

trapeze::trapeze(trapeze& t)
{
	this->a = t.a;
	this->b = t.b;
	this->c = t.c;
	this->d = t.d;
}

trapeze::trapeze(float a, float b, float c, float d)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;

}

float trapeze::perimetr()
{
	return a + b + c + d;
}