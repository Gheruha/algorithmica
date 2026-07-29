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

ArrayResult merge(const int src1[], const int src2[], int n, int m) {
  ArrayResult result;
  result.n = n + m;

  int i = 0, j = 0, p = 0;

  while (i < n && j < m) {
    if (src1[i] < src2[j]) {
      result.v[p++] = src1[i++];
    } else {
      result.v[p++] = src2[j++];
    }
  }

  while (i < n) {
    result.v[p++] = src1[i++];
  }

  while (j < m) {
    result.v[p++] = src2[j++];
  }

  return result;
}

ArrayResult merge_sort(const int src[], int n) {
  // Base case
  if (n <= 1) {
    ArrayResult base;
    base.n = n;
    for (int i = 0; i < n; i++) {
      base.v[i] = src[i];
    }
    return base;
  }

  int middle = n / 2;

  ArrayResult leftArr;
  leftArr.n = middle;

  ArrayResult rightArr;
  rightArr.n = n - middle;

  // Copy left half
  for (int i = 0; i < middle; i++) {
    leftArr.v[i] = src[i];
  }

  // Copy right half
  for (int j = 0; j < n - middle; j++) {
    rightArr.v[j] = src[middle + j];
  }

  // Recursively sort both halves
  ArrayResult sortedLeft = merge_sort(leftArr.v, leftArr.n);
  ArrayResult sortedRight = merge_sort(rightArr.v, rightArr.n);

  // Merge sorted halves
  return merge(sortedLeft.v, sortedRight.v, sortedLeft.n, sortedRight.n);
}

ArrayResult counting_sort(const int src[], int n) {
  int k = -1;
  for (int i = 0; i < n; i++) {
    if (k < src[i]) {
      k = src[i];
    }
  }

  int occurrences[k + 1];
  for (int i = 0; i <= k; i++) {
    occurrences[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    occurrences[src[i]] += 1;
  }

  for (int i = 1; i <= k; i++) {
    occurrences[i] += occurrences[i - 1];
  }

  ArrayResult result;
  result.n = n;

  for (int i = n - 1; i >= 0; i--) {
    int value = src[i];
    int position = occurrences[value] - 1;
    result.v[position] = value;
    occurrences[value]--;
  }

  return result;
}


// QuickSort
int partition(int v[], int start, int end) {
  int pivot = v[end];
  int i = start - 1;

  for (int j = start; j < end; j++) {
    if (v[j] < pivot) {
      i++;
      int aux = v[i];
      v[i] = v[j];
      v[j] = aux;
    }
  }

  i++;
  int aux = v[i];
  v[i] = v[end];
  v[end] = aux;

  return i;
}

void quick_sort_recursive(int v[], int start, int end) {
  if (start >= end)
    return;

  int p = partition(v, start, end);

  quick_sort_recursive(v, start, p - 1);
  quick_sort_recursive(v, p + 1, end);
}

ArrayResult quick_sort(const int src[], int n) {
  // Copy of original raw array
  ArrayResult result;
  result.n = n;

  for (int i = 0; i < n; i++) {
    result.v[i] = src[i];
  }

  quick_sort_recursive(result.v, 0, n - 1);

  return result;
}
