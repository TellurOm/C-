#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double num1, num2;
    char operation;
    double result;

    // Display menu
    cout << "Simple Calculator\n";

    // Input first number
    cout << "Enter first number: ";
    cin >> num1;
    if (cin.fail()) {
        cout << "Invalid input for number 1.\n";
        return 1; // Exit the program with an error code
    }

    // Input operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Input second number
    cout << "Enter second number: ";
    cin >> num2;
    if (cin.fail()) {
        cout << "Invalid input for number 2.\n";
        return 1; // Exit the program with an error code
    }

    // Perform the calculation based on the operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            cout << "Error: Invalid operator.\n";
            break;
    }

    return 0;
}
