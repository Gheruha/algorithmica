/*
Requirement
Given three natural numbers n a b, 1 ≤ a < b < n. Determine a way to write n as
a sum of terms equal to a or b in which the number of terms equal to a is
maximum.

Input
The program reads the numbers n a b from the keyboard.

Output
The program will display on the screen a string of numbers in ascending order,
representing the required terms.

Restrictions and specifications
1 ≤ n ≤ 1,000,000
1 ≤ a < b ≤ 1000
for all test data n can be written as a sum of terms equal to a and b.
*/
#include <iostream>

int main() {
  int a, b, n, cnt = 0;
  std::cin >> n >> a >> b;
  while (n % a != 0 && n != 0) {
    n -= b;
    cnt++;
  }

  for (int i = 0; i < n / a; i++) {
    std::cout << a << " ";
  }
  for (int i = 0; i < cnt; i++) {
    std::cout << b << " ";
  }
}
