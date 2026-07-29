/*
Requirement
Two numbers a and b are read. Display, in lexicographic order, the permutations
of the set {a, a + 1, ..., b}.

Input
The program reads the numbers a and b from the keyboard.

Output
The program will display on the screen, each on a line, the required
permutations. The elements of each permutation will be separated by a space.

Restrictions and specifications
1 ≤ a < b ≤ 1,000,000,000
0 < b - a < 8
*/
#include <iostream>
#include <vector>

void show(const std::vector<int> &x, int n) {
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      std::cout << " ";
    }
    std::cout << x[i];
  }
  std::cout << "\n";
}

void back(int k, const std::vector<int> &nums, std::vector<int> &x,
          std::vector<int> &p, int n) {
  for (int i = 0; i < n; i++) {
    if (!p[i]) {
      x[k] = nums[i];
      p[i] = 1;

      if (k < n - 1) {
        back(k + 1, nums, x, p, n);
      } else {
        show(x, n);
      }

      p[i] = 0;
    }
  }
}

int main() {
  int a, b;
  std::cin >> a >> b;

  int n = b - a + 1;

  std::vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    nums[i] = a + i;
  }

  std::vector<int> x(n);
  std::vector<int> p(n, 0);

  back(0, nums, x, p, n);

  return 0;
}
