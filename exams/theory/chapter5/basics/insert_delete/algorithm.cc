#include <iostream>

void display(int a[101], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << a[i] << " ";
  }
}

int main() {
  int a[101] = {1, 2, 3, 4, 5};
  int n = 5;

  int p;
  std::cin >> p;

  // Delete element at specific position
  for (int i = p; i < n - 1; i++) {
    a[i] = a[i + 1];
  }
  n--;

  // Add new elements if even
  for (int p = n - 1; p >= 0; p--) {
    if (a[p] % 2 == 0) {
      for (int i = n - 1; i >= p + 1; i--) {
        a[i + 1] = a[i];
      }
      a[p + 1] = a[p] / 2;
      n++;
    }
  }

  display(a, n);
  std::cout << "\n";

  // Delete all even elements
  for (int p = n - 1; p >= 0; p--) {
    if (a[p] % 2 == 0) {
      for (int i = p; i < n - 1; i++) {
        a[i] = a[i + 1];
      }
      n--;
    }
  }

  display(a, n);
}
