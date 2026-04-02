/*
 * Requirement
A nonzero natural number n is read. Display, in lexicographical order, the
permutations of the set {1,2,..,n}.

Input
The input file permutari.in contains the number n on the first line.

Output
The output file permutari.out will contain the elements of a permutation on each
line, separated by a space.

Restrictions and specifications
0 < n < 9
Example:
permutari.in

3
permutari.out

1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
*/
#include <fstream>
#include <iostream>

int n;
int x[9], used[9];
std::ofstream fout("permutari.out");

void write_out() {
  for (int i = 1; i <= n; i++) {
    fout << x[i] << " ";
  }

  fout << "\n";
}

void back(int k) {
  for (int i = 1; i <= n; i++) {
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
  std::ifstream fin("permutari.in");

  fin >> n;
  fin.close();

  back(1);
  fout.close();

  return 0;
}

