#include <iostream>

int main() {
  double num1, num2, num3;
  std::cout << "Enter three numbers: ";
  std::cin >> num1 >> num2 >> num3;
  double largest;
  if (num1 >= num2) {
    if (num1 >= num3) {
      largest = num1;
    } else {
      largest = num3;
    }
  } else {
    if (num2 >= num3) {
      largest = num2;
    } else {
      largest = num3;
    }
  }
  std::cout << "The largest number is: " << largest << std::endl;
  return 0;
}