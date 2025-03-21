#include <iostream>

bool isLeap(int year) {
  bool divisibleBy4 = (year % 4 == 0);
  bool divisibleBy100 = (year % 100 == 0);
  bool divisibleBy400 = (year % 400 == 0);

  if (divisibleBy4) {
    if (divisibleBy100) {
      return divisibleBy400;
    } else {
      return true;
    }
  } else {
    return false;
  }
}

int main() {
  int year;
  std::cout << "Enter a year: ";
  std::cin >> year;
  if (isLeap(year)) {
    std::cout << year << " is a leap year." << std::endl;
  } else {
    std::cout << year << " is not a leap year." << std::endl;
  }
  return 0;
}