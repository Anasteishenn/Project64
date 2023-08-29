#include "rectangle.h"

int count = 0;

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 4);
	Rectangle rect3;
	Rectangle rect4;

	

	cout << "Size of rectangles: " << Rectangle::get_count() << endl;

	return 0;
}