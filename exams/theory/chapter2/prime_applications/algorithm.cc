#include <iostream>

int application1(int n) {
  int d = 2, nr_div = 1, p;

  while (n > 1) {
    if (n % d == 0) {

      p = 0;
      while (n % d == 0) {
        p++;
        n /= d;
      }

      nr_div *= (p + 1); // Using formula (e1 + 1) * (e2 + 1) * ... * (ek + 1)
    }
    ++d;

    if (n > 1 && d * d > n) {
      d = n;
    }
  }

  return nr_div;
}

int main() {
  int n;
  std::cin >> n;

  std::cout << "Number of divisors " << application1(n) << "\n";

  return 0;
}
