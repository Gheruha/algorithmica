// There are 2 ways we can implement Euclid's algorithm:
//  1. By substraction.
//  2. By multiplication.

#include <iostream>

// 1. Euclid's algorithm implemented by substraction.
int euclid1(int n, int m) {
  // 1. We need to understand that the gcd of n and m is equal to their
  // difference since their difference is just a difference of 2 multiples of n.
  // 2. We substract the smaller number from the bigger one.
  // 3. When they're equal, the answer is straight forward, is their value.
  // (n,n) since m = n, => n is the gcd.
  while (n != m) {
    if (n > m)
      n -= m;
    else
      m -= n;
  }
  return n;
}

// 2. Euclid's algorithm implemented by multiplication;
int euclid2(int n, int m) {
  /* Intuition:
   * Useful Resource: https://www.youtube.com/watch?v=8cikffEcyPI
   *
     Why is it working: the greatest common divisor of 2 numbers divides the
     remaining of their divison as well.

     A number n is formed of divisors, the divisors have the remain 0 we we
     divide n to them. However a number n can be formed of divisors and
     remainings of the division with them. For example 24/9 is formed of 9 and
     the remainder 6.

     That's why is correct to divide to the remainder.
     By doing this multiple times we make the remainder smaller and smaller till
     it reaches 0. When it reaches 0, we stop, thid is the gcd. */
  while (m != 0) {
    int r = n % m;
    n = m;
    m = r;
  }

  return n;
}

int main() {
  int n, m;
  std::cin >> n >> m;

  std::cout << euclid1(n, m) << "\n";
  std::cout << euclid2(n, m);
  return 0;
}
