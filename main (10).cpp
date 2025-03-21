#include <iostream>
#include <string>

using namespace std;

int main() {
    double num1, num2;
    char op;

    // Get input from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Perform the arithmetic operation
    double result;
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; // Indicate an error
            }
            result = num1 / num2;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; // Indicate an error

    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0; // Indicate successful execution
}