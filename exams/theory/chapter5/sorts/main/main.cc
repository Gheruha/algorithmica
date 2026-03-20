#include "../algorithms/algorithms.h"

int main() {
  int src1[4] = {4, 6, 12, 17};
  int n = 4;
  int src2[3] = {2, 6, 9};
  int m = 3;

  ArrayResult result = collating(src1, src2, n, m);
  display(result, m + n);
}
