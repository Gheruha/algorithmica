/*
Requirement
Read two non-zero natural numbers n and k. Display, in lexicographic order, the
subsets of k elements of the set {1,2,..,n}.

Input
The input file combinari.in contains on the first line the numbers n and k,
separated by a space.

Output
The output file combinari.out will contain on each line k values, separated by a
space, representing the elements of a subset.

Restrictions and specifications
1 ≤ k ≤ n ≤ 15
the elements of each subset will be displayed in ascending order
Example:
combinari.in

4 2
combinari.out

1 2
1 3
1 4
2 3
2 4
3 4
*/

#include <fstream>

std::ofstream fout("combinari.out");
int n, k, x[16];

void show() {
  for (int i = 1; i <= k; i++) {
    fout << x[i] << " ";
  }
  fout << "\n";
}

void back(int step) {
  for (int i = x[step - 1] + 1; i <= n; i++) {
    x[step] = i;
    if (step < k)
      back(step + 1);
    else
      show();
  }
}

int main() {
  std::ifstream fin("combinari.in");
  fin >> n >> k;
  fin.close();

  back(1);
  fout.close();

  return 0;
}
