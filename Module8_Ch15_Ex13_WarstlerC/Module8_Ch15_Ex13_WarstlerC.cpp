#include <iostream>
using namespace std;
#include "Square.h"
int main()
{
	//instantiate a Square object
	Square s;

	//declare variable
	double side;

	//get the measurement of one side of the square
	cout << "Enter the side length: ";
	cin >> side;

	//assign the side measurement to the Square object
	s.setSide(side);

	//display the area of the square
	cout << "The area is: " << s.calcArea() << endl;
	return 0;
}