#include <iostream>

// Time complexity O(n^3) - could be used when n is around 100.
void algorithm1(int a[101], int n) {
  int left = 0, right = 1, S = 0, Smax = -2000000000;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      S = 0;

      for (int k = i; k <= j; k++)
        S += a[k];

      if (S > Smax)
        Smax = S, left = i, right = j;
    }
  }

  std::cout << "Smax: " << Smax << "\n";
  std::cout << "Interval [" << left << " ; " << right << "]\n";
}

int main() {
  int a[101] = {-2, 3, -89, 132, -342, 343, 123, 9, 0};
  algorithm1(a, 9);
  return 0;
}
