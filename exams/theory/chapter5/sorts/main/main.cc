#include "../algorithms/algorithms.h"

int main() {
  int src[7] = {4, 6, 12, 1, 4, 4, 12};
  int n = 7;

  ArrayResult result = quick_sort(src, n);
  display(result, n);
}
