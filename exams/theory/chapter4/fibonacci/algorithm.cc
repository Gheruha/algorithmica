// Resource: https://en.wikipedia.org/wiki/Fibonacci_sequence
#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int a = 1, b = 1, c;

  std::cout << 1 << " ";
  for (int i = 1; i < n; i++) {
    c = a + b;
    std::cout << b << " ";
    a = b;
    b = c;
  }

  return 0;
}
