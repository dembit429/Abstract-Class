#pragma once
#include "iostream"

using namespace std;

class Shape {
public:
	virtual float calcPer() = 0;
};
class Square : public Shape {
protected:
	float a;
public:
	float calcArea() {
		return 4 * a;
	}
	Square() {
		a = 0;
	}
	Square(int a) {
		this->a = a;
	}
};
class Circle : public Shape {
protected:
	float r;
public:
	float calcArea() {
		return 2 * 3.14 * r;
	}
	Circle() {
		r = 0;
	}
	Circle(int r) {
		this->r = r;
	}
};
class Rectangle : public Shape {
protected:
	float a, b;
public:
	float calcArea() {
		return 2(a + b);
	}
	Rectangle() {
		a = 0;
	}
	Rectangle(int a, int b) {
		this->a = a;
		this->b = b;
	}
};
class Triangle : public Shape {
	float a, b, c;
public:
	float calcArea() {
		return a+b+c;
	}
	Rectangle() {
		a = 0;
	}
	Rectangle(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
};
