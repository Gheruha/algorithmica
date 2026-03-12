#include "algorithms.h"
#include <iostream>

void display(ArrayResult result, int n) {
  for (int i = 0; i < n; i++) {
    std::cout << result.v[i] << " ";
  }
}

ArrayResult bubble_sort(const int src[], int n) {
  // Copy of original raw array
  ArrayResult result;
  result.n = n;
  for (int i = 0; i < n; i++) {
    result.v[i] = src[i];
  }

  int m = n;
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    int p = m;

    for (int i = 0; i < p - 1; i++) {
      if (result.v[i] > result.v[i + 1]) {
        int aux = result.v[i];
        result.v[i] = result.v[i + 1];
        result.v[i + 1] = aux;

        m = i + 1;
        sorted = false;
      }
    }
  }

  return result;
}
