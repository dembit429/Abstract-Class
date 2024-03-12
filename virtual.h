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
	box(box& b);
	float perimetr();
};

class pararelo:public shape {
protected:
	float a;
	float b;
public:
	pararelo();
	pararelo(float a,float b);
	pararelo(pararelo& p);
	float perimetr();
};

class triangle :public shape {
protected:
	float a;
	float b;
	float c;
public:
	triangle();
	triangle(float a, float b, float c);
	triangle(triangle& t);
	float perimetr();
};

class trapecia :public shape {
protected:
	float a;
	float b;
	float c;
	float d;
public:
	trapecia();
	trapecia(trapecia& t);
	trapecia(float a,float b,float c,float d);
	float perimetr();

};