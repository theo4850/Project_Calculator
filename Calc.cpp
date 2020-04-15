#include <iostream>;
#include <string>;
#include <cmath>;
#include <cstdlib>;
using namespace std;

void calc_soon();
void quadratic_eq();
void simple_math();
int eq_num();

float num1, num2;
int choice;
float result;
char repeat;
char complexity;

int main() {
    while (true) {
        // Ask the user what calculation want
        std::cout << "Do you want to do a more complex calculation? Enter y for yes or n for no: ";
        std::cin >> complexity;

        if (complexity == 'yes' || complexity == 'y' || complexity == 'Y') {
            eq_num();
        }
        else if (complexity == 'no' || complexity == 'n' || complexity == 'N') {
            simple_math();
        }

        //Ask the user if he/she want to do another calculation
        std::cout << "Do you want to do another calculations? Please enter y for yes or n for no: ";
        std::cin >> repeat;


        if (repeat == 'yes' || repeat == 'y' || repeat == 'Y') {
            continue;
        }
        else {
            break;
        }
    }
    std::cout << "Thank you for using our app!!!";
    system("pause");

    return 0;
}

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

void calc_soon() {
    std::cout << "This feature will be available soon... \n" << endl;
}
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
        else if (a == 0 && b != 0 ) {
            x1 = -(c / b);
            std::cout << "The root is: " << x1 << endl;
        }
        else if ((b * b - 4 * a * c) > 0) {
            x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
            x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
            std::cout << "The roots of the equation are: ";
            std::cout << "x1 = " << x1;
            std::cout << "x2 = " << x2;
        }
        else if ((b * b - 4 * a * c) < 0) {
            std::cout << "The equation is impossible. " << endl;
        }
        else if ((b * b - 4 * a * c) == 0) {
            x1 = (-b) / 2 * a;
            std::cout << "The root of the equation is x = " << x1;
        }

}

//Give the user the option to select the equation he/she wants to solve.
int eq_num() {

    int num5;

    std::cout << "Do you want a quadratic equation or a more difficult calculation? \n" <<
        "For quadratic equation, enter the number 1. \n" <<
        "For something more difficult, enter the number 2. \n" << endl;
    std::cout << "Enter the number you want: ";
    std::cin >> num5;

    if (num5 == 1) {
        quadratic_eq();
    }
    else if (num5 == 2) {
        calc_soon();
    }

    return num5;
}