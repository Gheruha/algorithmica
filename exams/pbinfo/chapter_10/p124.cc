/*
 * Requirement
A nonzero natural number n is read. Display, in reverse lexicographic order, the
permutations of the set {1,2,..,n}.

Input
The input file permutari1.in contains the number n on the first line.

Output
The output file permutari1.out will contain on each line the elements of a
permutation, separated by a space.

Restrictions and specifications
0 < n < 9
Example:
permutari1.in

3
permutari1.out

3 2 1
3 1 2
2 3 1
2 1 3
1 3 2
1 2 3
*/

#include <fstream>
#include <iostream>

int n;
int x[9], used[9];
std::ofstream fout("permutari1.out");

void write_out() {
  for (int i = 1; i <= n; i++) {
    fout << x[i] << " ";
  }

  fout << "\n";
}

void back(int k) {
  for (int i = n; i >= 1; i--) {
    if (!used[i]) {
      x[k] = i;
      used[i] = 1;

      if (k < n)
        back(k + 1);
      else
        write_out();

      used[i] = 0;
    }
  }
}

int main() {
  std::ifstream fin("permutari1.in");

  fin >> n;
  fin.close();

  back(1);
  fout.close();

  return 0;
}
