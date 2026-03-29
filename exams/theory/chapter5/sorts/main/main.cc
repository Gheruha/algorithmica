#include "../algorithms/algorithms.h"

int main() {
  int src[7] = {4, 6, 12, 17, -4, -43, 0};
  int n = 7;

  ArrayResult result = merge_sort(src, n);
  display(result, n);
}
