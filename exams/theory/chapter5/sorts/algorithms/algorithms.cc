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

ArrayResult selection_sort(const int src[], int n) {
  // Copy of original raw array
  ArrayResult result;
  result.n = n;
  for (int i = 0; i < n; i++) {
    result.v[i] = src[i];
  }

  for (int i = 0; i < n - 1; i++) {
    int p = i;
    for (int j = i + 1; j < n; j++) {
      if (result.v[j] < result.v[p]) {
        p = j;
      }
    }
    int aux = result.v[i];
    result.v[i] = result.v[p];
    result.v[p] = aux;
  }

  return result;
}

ArrayResult insertion_sort(const int src[], int n) {
  // Copy of original raw array
  ArrayResult result;
  result.n = n;
  for (int i = 0; i < n; i++) {
    result.v[i] = src[i];
  }

  for (int i = 1; i < n; i++) {

    int p = i;
    while (p > 0 && result.v[p] < result.v[p - 1]) {
      int aux = result.v[p];
      result.v[p] = result.v[p - 1];
      result.v[p - 1] = aux;
      p--;
    }
  }

  return result;
}

ArrayResult collating(const int src1[], const int src2[], int n, int m) {
  // Copy the original raw arrays
  int sorted1[n];
  for (int i = 0; i < n; i++) {
    sorted1[i] = src1[i];
  }

  int sorted2[m];
  for (int i = 0; i < m; i++) {
    sorted2[i] = src2[i];
  }

  ArrayResult result;
  result.n = m + n;
  int p = 0, i = 0, j = 0;

  while (i < n && j < m) {
    if (sorted1[i] < sorted2[j]) {
      result.v[p++] = sorted1[i++];
    } else {
      result.v[p++] = sorted2[j++];
    }
  }
  while (i < n) {
    result.v[p++] = sorted1[i++];
  }
  while (j < m) {
    result.v[p++] = sorted2[j++];
  }

  return result;
}
