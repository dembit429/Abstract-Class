#pragma once
#include <iostream>
using namespace std;

class shape {
public:
	virtual float calcArea() = 0;
};

class Square :public shape {
protected:
	float a;
public:
	Square();
	Square(float a);
	float calcArea();

};
class box :public shape {
protected:
	float a;
	float b;
public:
	box();
	box(float a, float b) {
		this->a = a;
		this->b = b;
	}
	float calcArea()
	{
		return a * b;
	};
};

class circle:public shape {
protected:
	float radius;
public:
	circle() {
		radius = 0;
	}
	circle(float radius) {
		this->radius = radius;
	}
	float calcArea() {
		return 3.14 * pow(radius,2);
	}
};