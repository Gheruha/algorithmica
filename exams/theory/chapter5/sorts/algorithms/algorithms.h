#ifndef ALGORITHMS_H
#define ALGORITHMS_H

struct ArrayResult {
  int v[100];
  int n;
};

void display(ArrayResult result, int n);
ArrayResult bubble_sort(const int src[], int n);

#endif
