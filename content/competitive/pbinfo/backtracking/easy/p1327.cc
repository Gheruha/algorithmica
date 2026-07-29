/*
Requirement
A nonzero natural number n is read, then n distinct natural numbers. Display, in
lexicographic order, the strings of the n values with the property that
any two neighboring are prime to each other.

Input
The input file sirpie.in contains on the first line the number n, and on the
second line n natural numbers.

Output
The output file sirpie.out will contain on each line elements of a string,
separated by a space.

Restrictions and specifications
1 ≤ n < 10
the n numbers on the second line of the input files are less than 10000
* */
#include <fstream>
#include <vector>

std::ifstream fin("sirpie.in");
std::ofstream fout("sirpie.out");

bool verify(int a, int b) {
  if (b == 0) {
    return a == 1;
  }

  return verify(b, a % b);
}

void show(std::vector<int> &x, int n) {
  for (int i = 0; i < n; i++) {
    fout << x[i] << " ";
  }
  fout << "\n";
}

void back(int k, std::vector<int> &nums, std::vector<int> &x,
          std::vector<int> &p, int n) {
  for (int i = 0; i < n; i++) {
    if (!p[i] && (k == 0 || verify(nums[i], x[k - 1]))) {
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
  int n;
  fin >> n;

  std::vector<int> nums(n);

  for (int i = 0; i < n; i++) {
    fin >> nums[i];
  }

  for (int i = 0; i < n; i++) {
    int poz = i;

    for (int j = i + 1; j < n; j++) {
      if (nums[j] < nums[poz]) {
        poz = j;
      }
    }

    int aux = nums[i];
    nums[i] = nums[poz];
    nums[poz] = aux;
  }

  std::vector<int> x(n);
  std::vector<int> p(n, 0);

  back(0, nums, x, p, n);

  return 0;
}
