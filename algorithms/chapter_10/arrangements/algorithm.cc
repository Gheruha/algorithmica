#include <iostream>

int k;
int n;
int p[11];
int x[11];
void show() {
  for (int i = 1; i <= k; i++) {
    std::cout << x[i] << " ";
  }
  std::cout << "\n";
}

void back(int pas) {
  for (int i = 1; i <= n; i++) {
    if (!p[i]) {
      x[pas] = i;
      p[i] = 1;

      if (pas < k)
        back(pas + 1);
      else
        show();

      p[i] = 0;
    }
  }
}

int main() {
  std::cin >> n >> k;
  back(1);

  return 0;
}
