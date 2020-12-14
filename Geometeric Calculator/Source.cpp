/*  Geometeric Calculator
 *  Jasper Bauer-Brown
 *  12/11/2020
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
using namespace std;

float shape1,
		radius,
		circumference,
		length,
		width,
		height,
		perimeter,
		area,
		surfaceArea,
		volume,
		hypotenuse;

string shape;
string again;
int main() {
	do {
		cout << "Please select a shape to calculate:  circle, sphere, triangle, square, rectangle, cube, brick: " << endl;
		cin >> shape;
		if (shape == "circle") {
			cout << "Please enter the radius: " << endl;
			cin >> radius;
			circumference = radius * 2 * atan(1) * 4;
			area = pow(radius, 2) * atan(1) * 4;
			cout << "The circumference is: " << circumference << "\nThe area is: " << area << endl;
			cout << "\nWould you like to calculate another shape?  yes/no" << endl;
			cin >> again;
		}
		else if (shape == "sphere") {
			cout << "Please enter the radius: " << endl;
			cin >> radius;
			circumference = radius * 2 * atan(1) * 4;
			surfaceArea = (4 * atan(1) * 4) * (pow(radius, 2));
			volume = (4 * atan(1) * 4) * (pow(radius, 3) / 3);
			cout << "The circumference is: " << circumference << "\nThe surface area is: " << surfaceArea << "\nThe volume is: " << volume << endl;
			cout << "\nWould you like to calculate another shape?  yes/no" << endl;
			cin >> again;
		}
		else if (shape == "triangle") {
			cout << "Please enter the height: " << endl;
			cin >> height;
			cout << "Please enter the length: " << endl;
			cin >> length;
			hypotenuse = pow(pow(length, 2) + pow(height, 2), .5);
			area = (length * height) / 2;
			perimeter = hypotenuse + length + height;
			cout << "The hypotenuse is: " << hypotenuse << "\nThe perimeter is: " << perimeter << "\nThe area is: " << area << endl;
			cout << "\nWould you like to calculate another shape?  yes/no" << endl;
			cin >> again;
		}
		else if (shape == "square" || shape == "rectangle") {
			cout << "Please enter length: " << endl;
			cin >> length;
			cout << "Please enter width/height: " << endl;
			cin >> width;
			area = length * width;
			perimeter = (length * 2) + (width * 2);
			cout << "The area is: " << area << "\nThe perimeter is: " << perimeter;
			cout << "\nWould you like to calculate another shape?  yes/no" << endl;
			cin >> again;
		}
		else if (shape == "cube" || shape == "brick") {
			cout << "Please enter length: " << endl;
			cin >> length;
			cout << "Please enter width: " << endl;
			cin >> width;
			cout << "Please enter height: " << endl;
			cin >> height;
			volume = length * (width * height);
			surfaceArea = 2 * ((length * width) + (length * height) + (width * height));
			cout << "The surface area is: " << surfaceArea << "\nThe volume is: " << volume << endl;
			cout << "\nWould you like to calculate another shape?  yes/no" << endl;
			cin >> again;
		}
		else {
			cout << "Please enter a valid shape.  (Case sensitive)" << endl;
			again = "yes";
		}
	} while (again == "yes");
	cout << "Goodbye!" << endl;
}