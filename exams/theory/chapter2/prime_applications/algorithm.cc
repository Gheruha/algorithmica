#include <cmath>
#include <iostream>

// Finding the number of n's divisors
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

// Finding the sum of n's divisors
int application2(int n) {
  int d = 2, p;
  long long sum = 1;

  // Prime factorization
  while (n > 1) {
    if (n % d == 0) {

      p = 0;
      while (n % d == 0) {
        p++;
        n /= d;
      }
      long long term =
          ((long long)std::pow(d, p + 1) - 1) / (d - 1); // sigma function
      sum *= term;
    }
    d++;

    if (n > 1 && d * d > n) {
      n = d;
    }
  }

  return sum;
}

int main() {
  int n;
  std::cin >> n;

  std::cout << "Number of n's divisors:  " << application1(n) << "\n";
  std::cout << "Sum of n's divisors: " << application2(n) << "\n";

  return 0;
}
