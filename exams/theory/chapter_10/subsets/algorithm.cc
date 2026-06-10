#include <iostream>

int n, k, x[10];

void show(int k) {
  for (int i = 1; i <= k; i++) {
    std::cout << x[i] << " ";
  }
  std::cout << "\n";
}

void back(int k) {
  for (int i = x[k - 1] + 1; i <= n; i++) {
    x[k] = i;
    show(k);

    if (k < n)
      back(k + 1);
  }
}

int main() {
  std::cin >> n;
  back(1);

  return 0;
}
