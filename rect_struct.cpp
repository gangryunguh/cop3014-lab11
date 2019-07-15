#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle

// PLACE YOUR NAME HERE

// Fill in code to declare a structure named rectangle which has
// members length, width, area, and perimeter all of which are floats
struct rectangle {
    double length;
    double  width;
    long double area;
    long double perimeter;
private:
    friend std::ostream& operator<<(std::ostream&, const rectangle &a);
};

std::ostream& operator<<(std::ostream &strm, const rectangle &a) {
    return strm << "The width : " << a.area << "\n" << "The perimeter: " << a.perimeter << endl;
}

int main()
{
	// Fill in code to define a rectangle variable named box
    rectangle box;

	cout << "Enter the length of a rectangle: " << flush;

	// Fill in code to read in the length member of box
    cin >> box.length;

	cout << "Enter the width of a rectangle: ";

	// Fill in code to read in the width member of box
    cin >> box.width;
	cout << endl << endl;

	// Fill in code to compute the area member of box
    box.area = box.length * box.width;
	// Fill in code to compute the perimeter member of box
    box.perimeter = box.length*2 + box.width*2;

	cout << fixed << showpoint << setprecision(2);

	// Fill in code to output the area with an appropriate message
    cout << "The area of the box: " << box.area << endl;

    // Fill in code to output the perimeter with an appropriate message
    cout << "The perimeter of the box: " << box.perimeter << endl;

    cout << box;

    return 0;
}