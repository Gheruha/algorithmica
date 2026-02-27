#include <iostream>

// How to determine the bigger digit of the representation in base b of the
// number n
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

int main() {
  int n, b;
  std::cin >> n >> b;

  std::cout << "The biggest digit of the representation in base " << b
            << " of the number " << n << ": " << algorithm1(n, b);


  return 0;
}
