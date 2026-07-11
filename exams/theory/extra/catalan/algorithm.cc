#include <iostream>

unsigned long long catalan(int n) {

  if (n == 0) {
    return 1;
  }

  unsigned long long result = 0;
  for (int inside = 0; inside < n; inside++) {
    int outside = n - inside - 1;

    result += catalan(inside) * catalan(outside);
  }

  return result;
}

int main() {

  int n;
  std::cin >> n;
  int result = catalan(n);
  std::cout << result << "\n";

  return 0;
}
