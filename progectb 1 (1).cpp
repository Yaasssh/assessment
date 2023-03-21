#include <iostream>
using namespace std;

// Function prototypes
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main() {
    double num1, num2;
    int choice;

    cout << "Select operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    // Take input from the user
    cout << "Enter choice (1/2/3/4): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(choice) {
        case 1:
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}

// Function definitions
double add(double x, double y) {
    // Addition
    return x + y;
}

double subtract(double x, double y) {
    // Subtraction
    return x - y;
}

double multiply(double x, double y) {
    // Multiplication
    return x * y;
}

double divide(double x, double y) {
    // Division
    if (y == 0) {
        cout << "Error: division by zero" << endl;
        return 0;
    }
    return x / y;
}

