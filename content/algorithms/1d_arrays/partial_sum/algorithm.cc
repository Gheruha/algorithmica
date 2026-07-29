#include <iostream>

int main() {
  int A[101] = {-3, 31, 43, 93, -101, 43, 12, -44};
  int S[101], n = 8;

  S[0] = A[0];
  for (int i = 1; i < n; i++) {
    S[i] = S[i - 1] + A[i];
    std::cout << A[i] << " ";
  }
  std::cout << "\n";

  int left, right;
  std::cin >> left >> right;

  int sum;
  if (left == 0)
    sum = S[right];
  else
    sum = S[right] - S[left - 1];

  std::cout << sum;
  return 0;
}
