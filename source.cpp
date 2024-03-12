#include "virtual.h"

int main() {

	shape* array[5];
	
	rectangle rect(4, 5);
	/*triangle tria(9,5,7);*/
	paralelo par(7,12);
	/*paralelo trap(4, 13, 7, 8);*/
	
	array[0] = &rect;
	//array[1] = &tria;
	array[2] = &par;
	//array[3] = &trap;

	for (int i = 0; i < 4; i++) {
		cout << "Perimetr " << i + 1 << ": " << arr[i]->perimetr() << endl;
	}
	
	return 0;
}