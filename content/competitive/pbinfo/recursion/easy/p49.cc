/*
Requirement
Write a program that reads the natural number n and determines its value!.

Input
The program reads the number n from the keyboard.

Output
The program displays the first line of the screen with the value of n!.

Restrictions and specifications
0 ≤ n ≤ 15
by definition, 0! = 1
*/

#include <iostream>

long long factorial(int n) {
  if (n == 0) {
    return 1;
  }
  return factorial(n - 1) * n;
}
int main() {

  int n;
  std::cin >> n;
  std::cout << factorial(n);
}
