#include <iostream>

/* Base algorithm for finding if a number is prime
 * 1. We assume n is prime.
 * 2. We verify the particular case, if n < 2/
 * 3. We search a divisor in the in the interval [2, sqrt(n)].
 * 4. If we find we change our assumption.
 * */

int main() {
  int n;
  std::cin >> n;

  // Particular case
  if (n < 2) {
    std::cout << n << " is not prime since n < 2.";
    return 0;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      std::cout << n << " is not prime.";
      return 0;
    }
  }

  std::cout << n << " is prime";
  return 0;
}
