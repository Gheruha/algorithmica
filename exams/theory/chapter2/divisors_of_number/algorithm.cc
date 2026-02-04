// You can find more theory in
// exams/theory/chapter2/divisors_of_number/theory.txt

#include <iostream>

// Silly method - very bad for large numbers, but works
void method1(int n) {
  for (int d = 1; d <= n; d++) {
    if (n % d == 0) {
      std::cout << d << " ";
    }
  }
}

// Still a silly method, but half as silly
// After n/2 there are no more divisors, no need for checking more
void method2(int n) {
  for (int d = 1; d <= n / 2; d++) {
    if (n % d == 0) {
      std::cout << d << " ";
    }
  }

  // n is always a divisor for himself
  std::cout << n;
}

// A better method with time complexity of sqrt(n).
// The divisors of n are in pairs which means that if d is a divisor of n, than
// n/d is also a divisor of n. By doing that we need to check only the numbers
// less or equal to sqrt(n), if we go further we'll always get numbers bigger
// than n.
void method3(int n) {
  for (int d = 1; d * d <= n; d++) {
    if (n % d == 0) {
      std::cout << d << " ";

      if (d * d < n) { // This if checks if we do not have a perfect square,
                       // since if we do we would cout the same d two times.
        std::cout << n / d << " ";
      }
    }
  }
}
// Observations: 1. Perfect squares have odd nr of divisors while the other ones
// have even nr of divisors.

int main() {
  int n;
  std::cin >> n;

  // method1(n);
  // std::cout << "\n";
  // method2(n);
  method3(n);
}
