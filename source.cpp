#include "virtual.h"

int main() {
	shape* array[3];
	Square a(4);
	circle b(3);
	box c(2,3);
	
	
	array[0]=&a;
	array[1]=&b;
	array[2]=&c;

	for (int i = 0; i < 3; i++) {
		cout<<(*array[i]).calcArea()<<endl;
	}
	
	return 0;
}