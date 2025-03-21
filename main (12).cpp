#include <iostream>
#include <vector>
#include <limits> // Required for numeric_limits

using namespace std;

// Function to get a valid grade from the user
double getValidGrade() {
    double grade;
    while (true) {
        cout << "Enter a grade (0.0 - 100.0): ";
        cin >> grade;

        // Input validation: Check if the input is a valid number within the range
        if (cin.fail() || grade < 0.0 || grade > 100.0) {
            cout << "Invalid input. Please enter a number between 0.0 and 100.0." << endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        } else {
            return grade;
        }
    }
}

int main() {
    vector<double> grades(4); // Use a vector to store the four grades
    double sum = 0.0;

    // Use a for loop to get grades with input validation
    for (int i = 0; i < 4; ++i) {
        cout << "Enter grade for quarter " << i + 1 << ":" << endl;
        grades[i] = getValidGrade();
        sum += grades[i];
    }

    // Calculate and display the average
    double average = sum / 4.0;
    cout << "The average of the four quarter grades is: " << average << endl;

    return 0;
}