
#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
	int width;

public:
	int area() { return width*height; }
	
	double height;
	void set_values(int, double);
};

void Rectangle::set_values(int x, double y) {
	width = x;
	height = y;
}

int main () {
	Rectangle rect;
	rect.set_values (3,4);
	cout << " area: " << rect.area();

	system("pause");
	return 0;
}
