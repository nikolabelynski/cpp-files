#include <iostream>
using namespace std;


class areaAndPerimeter {
	int a, b;
public:
	
	void set_values(int, int);
	
	int areaOfSquare() {
		return(a*b);
	}
	
	int perimeterOfSquare() {
		return( (2*a) + (2*b) );
	}
	
	int araOfRectangle() {
		return(a*b);
	}

	int perimeterOfRectangle() {
		return( (2*a) + (2*b) );
	}

};


void areaAndPerimeter::set_values(int height, int width) {
	a = height;
	b = width;
}


int main() {

	areaAndPerimeter square, rectangle;
	square.set_values(2, 2);
	rectangle.set_values(4, 2);

	cout << square.areaOfSquare() << endl;
	cout << square.perimeterOfSquare() << endl;
	cout << rectangle.araOfRectangle() << endl;
	cout << rectangle.perimeterOfRectangle() << endl;

}
