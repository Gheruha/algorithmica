// https://codeforces.com/problemset/problem/579/A
// Rang: 1000
#include <iostream>

int main() {
  int x;
  std::cin >> x;

  int nr = 0;
  while (x != 0) {
    if (x % 2 == 1)
      nr++;
    x /= 2;
  }

  std::cout << nr;
  return 0;
}
