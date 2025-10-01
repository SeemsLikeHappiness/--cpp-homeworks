#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float number;
	cout << "Enter number: ";
	cin >> number;
	float squareNumber;
	squareNumber = pow(number, 2);
	cout << "Square of the number: "<<squareNumber << "\n";
	float cubeNumber;
	cubeNumber = pow(number, 3);
	cout << "Cube of the number: " << cubeNumber;
}

