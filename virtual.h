#pragma once
#include <iostream>
using namespace std;

class shape {
public:
	virtual float perimetr() = 0;
};

class box :public shape {
protected:
	float a;
	float b;
public:
	box();
	box(float a, float b);
	float perimetr();
};

class pararelo:public shape {
protected:
	float a;
	float b;
public:
	pararelo();
	pararelo(float radius);
	float calcArea();
};