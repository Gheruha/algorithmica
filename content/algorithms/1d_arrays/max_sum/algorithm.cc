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

// Time complexity O(n^2) - could be used when n is around 1000.
void algorithm2(int a[101], int n) {
  int SP[101];
  SP[0] = a[0];

  for (int i = 0; i < n; i++) {
    SP[i] = SP[i - 1] + a[i];
  }

  int left = 0, right = 1, S = 0, Smax = -2000000000;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= n; j++) {
      S = SP[j] - SP[i - 1];

      if (S > Smax)
        Smax = S, left = i, right = j;
    }
  }

  std::cout << "Smax: " << Smax << "\n";
  std::cout << "Interval [" << left << " ; " << right << "]\n";
}

// Time complexity O(n) - Kadane Algorithm
void algorithm3(int a[101], int n) {
  int left = 0, start = 0, right = 1, S = 0, Smax = -2000000000;

  for (int i = 0; i < n; i++) {
    if (S < 0)
      S = 0, start = i;

    S += a[i];

    if (S > Smax)
      Smax = S, left = start, right = i;
  }

  std::cout << "Smax: " << Smax << "\n";
  std::cout << "Interval [" << left << " ; " << right << "]\n";
}

int main() {
  int a[101] = {-2, 3, -89, 132, -342, 343, 123, 9, 0};
  algorithm3(a, 9);
  return 0;
}
