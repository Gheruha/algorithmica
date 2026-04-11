#ifndef ALGORITHMS_H
#define ALGORITHMS_H

struct ArrayResult {
  int v[100];
  int n;
};

void display(ArrayResult result, int n);
ArrayResult bubble_sort(const int src[], int n);
ArrayResult selection_sort(const int src[], int n);
ArrayResult insertion_sort(const int src[], int n);
ArrayResult merge(const int src1[], const int src2[], int n, int m);
ArrayResult merge_sort(const int src[], int n);
ArrayResult counting_sort(const int src[], int n);
ArrayResult quick_sort(const int src[], int n);

#endif
