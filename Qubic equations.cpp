#include <iostream>;
#include <cmath>;
#include <string>;
#include <cstdlib>;

using namespace std;
void quadratic_eq();

//Ax^3 + Bx^2 + Cx + D = 0
void cubic_eq() {

	float a, b, c, d, y1, y2, y3;

	std::cout << "Please enter the first number: ";
	std::cin >> a;
	std::cout << "Please enter the secont number: \n";
	std::cin >> b;
	std::cout << "Please enter the third number: \n";
	std::cin >> c;
	std::cout << "Please enter the fourth number: \n";
	std::cin >> d;

	if (a == 0) {
		std::cout << "The equation is quadratic. \n";
		quadratic_eq();
	} 
}