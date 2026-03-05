/*
Requirement
Given n natural numbers. Determine the smallest base b in which these numbers
could be considered.

Input
The program reads the number n from the keyboard, and then n natural numbers,
separated by spaces.

Output
The program displays the number b, the searched value, on the screen.

Restrictions and specifications
1 ≤ n ≤ 100
the n numbers read will be less than 1,000,000,000
Example:

Input
5
1524 300024 10001 2034 543201

Output
6
* */

#include <iostream>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(nullptr);

  int n, base = 2;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    long long x;
    std::cin >> x;

    if (x == 0) {
      continue;
    }

    while (x > 0) {
      int d = x % 10;
      if (d + 1 > base)
        base = d + 1;

      x /= 10;
    }
  }

  std::cout << base << "\n";
  return 0;
}
