/*
A natural number is given.

Requirement
Calculate the sum of the digits of the given number.

Input
The program will read a natural number from the keyboard.

Output
The program will display the sum of the digits of the read number on the screen.

Restrictions and specifications
The read number will be less than 2,000,000,000
*/
#include <iostream>

int sum(int n) {
  if (n == 0) {
    return 0;
  }
  return sum(n / 10) + n % 10;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << sum(n);
}
