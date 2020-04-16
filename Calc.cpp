#include <iostream>;
#include <string>;
#include <cmath>;
#include <cstdlib>;
using namespace std;

void calc_soon();
void quadratic_eq();
void simple_math();
int eq_num();

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

void calc_soon() {
    std::cout << "This feature will be available soon... \n" << endl;
}

//Give the user the option to select the equation he/she wants to solve.
int eq_num() {

    int num5;

    std::cout << "Do you want a quadratic equation or a more difficult calculation? \n" <<
        "For quadratic equation, enter the number 1. \n" <<
        "For qube equation, enter the number 2. \n" << 
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