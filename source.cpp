#include "virtual.h"

int main() {

	shape* array[4];

	rectangle rect(4, 5);
	triangle tria(9,5,7);
	paralelo par(7, 12);
	trapeze trap(4, 13, 7, 8);

	array[0] = &rect;
	array[1] = &tria;
	array[2] = &par;
	array[3] = &trap;

	
	//for (int i = 0; i < 4; i++) {
	//	cout << "Perimeter " << i + 1 << ": " << array[i]->perimetr() << endl;
	//}
	int menu;
	cout << "What perimeter do you need?\n 1.Rectangle\n 2.Triangle\n 3.Paralelogram\n 4.Trapeze\n 5.All\n 6.Exit\nType number:"; cin >> menu;
	if (menu < 1 || menu>6) {
		cout << "Invalid number! Try again" << endl;
		return main();
	}
	switch (menu) {
	case 1:
		cout << "Rectangle perimeter = " << rect.perimetr() << endl; return main();
	case 2:
		cout << "Triangle perimeter = " << tria.perimetr() << endl; return main();
	case 3:
		cout << "Paralelogram perimeter = " << par.perimetr() << endl; return main();
	case 4:
		cout << "Trapeze perimeter = " << trap.perimetr() << endl; return main();
	case 5:
		for (int i = 0; i < 4; i++) {
			cout << "Perimeter " << i + 1 << " = " << array[i]->perimetr() << endl;
		}return main();
	case 6:
		return 0;
	}

	return 0;
}