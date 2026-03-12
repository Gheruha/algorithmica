#include "../algorithms/algorithms.h"
#include <iostream>

int main() {
  int src[100] = {1, 43, 84, 2, 9, 19};
  int n = 6;

  ArrayResult result = selection_sort(src, n);
  display(result, n);
}
