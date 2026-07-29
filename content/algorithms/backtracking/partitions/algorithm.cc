#include <iostream>

int sol[20];
int cnt = 0;

void show() {
  for (int i = 0; i < cnt; i++) {
    std::cout << sol[i];
    if (i + 1 < cnt) {
      std::cout << " * ";
    }
  }
  std::cout << '\n';
}

void partitions(int minim, int n) {
  for (int d = minim; d <= n; d++) {
    if (n % d == 0) {
      sol[cnt++] = d;

      if (n / d == 1) {
        show();
      } else {
        partitions(d, n / d);
      }

      cnt--;
    }
  }
}

int main() {
  int n;
  std::cin >> n;

  partitions(2, n);

  return 0;
}
