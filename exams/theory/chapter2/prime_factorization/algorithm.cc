/* Deductive algorithm for prime factorization.
 * 1. Realise that the prime factors of n are between 2 and n.
 * 2. Go between these prime numbers one by one:
 *  2.1. Determine the power of this factor by counting how many times we can divide n by d.
 *  2.2  Show the prime factor and his power.
 * 3. If n becomes 1, we stop. 
 * */
#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int d = 2, // d will be in turn every prime number in the factorization.
      p;     // p will be the power of d.

  // We divide n by d till n becomes 1.
  while (n > 1) {
    if (n % d == 0) {
      p = 0;

      // Counting how many times n is divided by d.
      while (n % d == 0) {
        ++p;
        n /= d;
      }

      std::cout << d << "^" << p << "\n";
    }
    ++d;
    // if d * d > n and n is bigger than 1, we dicide that n is prime and it
    // is a factor in the factorization.
    if (n > 1 && d * d > n) {
      d = n;
    }
  }

  return 0;
}
