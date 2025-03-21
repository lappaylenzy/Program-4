#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    string name;
    int birthYear, birthMonth, birthDay;

    cout << "Enter your name: ";
    getline(cin, name); // Use getline to handle spaces in names

    cout << "Enter your birth year (YYYY): ";
    cin >> birthYear;
    cout << "Enter your birth month (MM): ";
    cin >> birthMonth;
    cout << "Enter your birth day (DD): ";
    cin >> birthDay;

    time_t now = time(0);
    tm *ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;
    int currentMonth = 1 + ltm->tm_mon;
    int currentDay = ltm->tm_mday;


    int age = currentYear - birthYear;
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    cout << name << " is " << age << " years old." << endl;

    return 0;
}