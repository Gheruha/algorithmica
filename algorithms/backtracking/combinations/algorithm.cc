// The following algorithm displays all the possible combinations for a given
// array with elements from interval {1,2,3,... n-1, n} and k elements per pair.
#include <iostream>

int n, k;
int x[21];

void show() {
  for (int i = 1; i <= k; i++) {
    std::cout << x[i] << " ";
  }
  std::cout << "\n";
}

void back(int step) {
  for (int i = x[step - 1] + 1; i <= n; i++) {
    x[step] = i;
    if (step < k) {
      back(step + 1);
    } else {
      show();
    }
  }
}

int main() {
  std::cin >> n >> k;
  back(1);

  return 0;
}
