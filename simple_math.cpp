#include <iostream>;
#include <cmath>;
#include <cstdlib>;
#include <string>;

using namespace std;

float num1, num2;
int choice;
float result;

//Do simple math
void simple_math() {

    std::cout << "1. Add\n" <<
        "2. Subtract\n" <<
        "3. Multiply\n" <<
        "4. Divide\n" <<
        "5. Squareroot\n" <<
        "6. logarithm\n" <<
        "7. exponential function\n" <<
        "8. Sin \n" <<
        "9. Cosin \n" <<
        "10. Tan \n" <<
        "11. Logarithm with the base of 10. \n" <<
        "12. Absolute Number. \n"
        "What would you like to do? Please enter one number: ";

    std::cin >> choice;

    if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
        std::cout << "Please enter the first number: ";
        std::cin >> num1;
        std::cout << "Now, enter the second number: ";
        std::cin >> num2;
    }
    else {
        std::cout << "Please enter one number: ";
        std::cin >> num1;
    }

    if (choice == 1) {
        result = num1 + num2;
    }
    else if (choice == 2) {
        result = num1 - num2;
    }
    else if (choice == 3) {
        result = num1 * num2;
    }
    else if (choice == 4) {
        if (num2 > 0 or num2 < 0) {
            result = num1 / num2;
        }
        else if (num2 == 0) {
            std::cout << "The operation cannot be executed.";
        }
    }
    else if (choice == 5) {
        result = sqrt(num1);
    }
    else if (choice == 6) {
        result = log(num1);
    }
    else if (choice == 7) {
        result = exp(num1);
    }
    else if (choice == 8) {
        result = sin(num1);
    }
    else if (choice == 9) {
        result = cos(num1);
    }
    else if (choice == 10) {
        result = tan(num1);
    }
    else if (choice == 11) {
        result = log10(num1);
    }
    else if (choice == 12) {
        result = fabs(num1);
    }

    std::cout << "The result is: " << result << endl;

}