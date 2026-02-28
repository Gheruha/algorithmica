#include <iostream>

// How to determine the bigger digit of the representation in base b of the
// number n in base 10
int algorithm1(int n, int b) {
  int max = 0;
  while (n != 0) {
    int d = n % b;
    if (d > max)
      max = d;

    n /= b;
  }
  return max;
}

// Conversion from base b to base 10
int algorithm2(int n, int b) {
  int res = 0;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    res = res * b + x;
  }

  return res;
}

int main() {
  int n, b;
  std::cout << "Write a number in base 10 and a random base: ";
  std::cin >> n >> b;

  std::cout << "The biggest digit of the representation in base " << b
            << " of the number " << n << ": " << algorithm1(n, b);

  std::cout
      << "\nWrite how many digits your number will have and a random base: ";
  std::cin >> n >> b;
  int res = algorithm2(n, b);

  std::cout << "The number you wrote in base " << b
            << " convert to base 10 is: " << res;
  return 0;
}
