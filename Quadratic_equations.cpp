#include <iostream>;
#include <cmath>;
#include <string>;
#include <cstdlib>;

using namespace std;

//Ax^2 + Bx + C = 0
void quadratic_eq() {

    double a, b, c, x1, x2;

    std::cout << "Please enter the value of A: ";
    std::cin >> a;
    std::cout << "Please enter the value of B: ";
    std::cin >> b;
    std::cout << "Please enter the value of C: ";
    std::cin >> c;
    std::cout << "You wrote the equation: " << a << "x^2 + " << b << "x + " << c << endl;

    if (a == 0 && b == 0) {
        std::cout << "The equation is impossible." << endl;
    }
    else if (a == 0 && b != 0) {
        x1 = -(c / b);
        std::cout << "The root is: " << x1 << endl;
    }
    else if ((b * b - 4 * a * c) > 0) {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
        x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
        std::cout << "The roots of the equation are: ";
        std::cout << "x1 = " << x1 << endl;
        std::cout << "x2 = " << x2 << endl;
    }
    else if ((b * b - 4 * a * c) < 0) {
        std::cout << "The equation is impossible. " << endl;
    }
    else if ((b * b - 4 * a * c) == 0) {
        x1 = (-b) / 2 * a;
        std::cout << "The root of the equation is x = " << x1;
    }

}