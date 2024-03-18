#pragma once
#pragma once
#include <iostream>
using namespace std;

class shape {
public:
	virtual float perimetr() = 0;
};

class rectangle :public shape {
protected:
	float a, b;

public:
	rectangle();
	rectangle(float a, float b);
	rectangle(rectangle& b);
	float perimetr();
};

class paralelo :public shape {
protected:
	float a, b;

public:
	paralelo();
	paralelo(float a, float b);
	paralelo(paralelo& p);
	float perimetr();
};

class triangle :public shape {
protected:
	float a, b, c;

public:
	triangle();
	triangle(float a, float b, float c);
	triangle(triangle& t);
	float perimetr();
};

class trapeze :public shape {
protected:
	float a, b, c, d;

public:
	trapeze();
	trapeze(trapeze& t);
	trapeze(float a, float b, float c, float d);
	float perimetr();

};