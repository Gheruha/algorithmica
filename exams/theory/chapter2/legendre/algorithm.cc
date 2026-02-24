#include <iostream>

int main() {
  int n;
  int p = 5;
  int s = 0;

  std::cin >> n;

  while (n > p) {
    s += n / p, p *= 5;
  }

  std::cout << s;

  return 0;
}
