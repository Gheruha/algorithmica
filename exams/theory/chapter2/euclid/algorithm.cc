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
int euclid2() { return 0; }

int main() {
  int n, m;
  std::cin >> n >> m;

  std::cout << euclid1(n, m);
  return 0;
}
