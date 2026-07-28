#include <iostream>

int x[21], used[21];
int cnt, n;

void show() {

  for (int i = 1; i <= n; i++) {
    std::cout << x[i] << " ";
  }
  std::cout << "\n";
}

void backtracking(int k) {
  for (int i = 1; i <= n; i++) {
    if (!used[i]) {
      x[k] = i;
      used[i] = 1;

      if (k < n)
        backtracking(k + 1);
      else {
        show();
        cnt++;
      }

      used[i] = 0;
    }
  }
}

int main() {
  std::cin >> n;
  backtracking(1);
  std::cout << "\n" << cnt;

  return 0;
}
