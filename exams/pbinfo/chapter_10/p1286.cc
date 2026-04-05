/*
* Requirement
A nonzero natural number n is read. Display, in lexicographic order, all
nonempty subsets of the set {1,2,..,n} for which the difference between any two
elements is greater than 1.

Input
The input file subsets1.in contains the number n on the first line.

Output
The output file subsets1.out will contain elements of one subset on each line,
of a subset being separated by a space.

Restrictions and specifications
1 ≤ n ≤ 10
the elements of each subset will be displayed in ascending order
Example:
subsets1.in

5
subsets1.out

1
1 3
1 3 5
1 4
1 5
2
2 4
2 5
3
3 5
4
5
*/

#include <fstream>
int n, x[11];
std::ifstream cin("submultimi1.in");
std::ofstream cout("submultimi1.out");

void show(int step) {
  for (int i = 1; i <= step; i++) {
    cout << x[i] << " ";
  }
  cout << "\n";
}

void back(int step) {
  for (int i = x[step - 1] + 2; i <= n; i++) {
    x[step] = i;
    show(step);
    if (step < n) {
      back(step + 1);
    }
  }
}

int main() {
  cin >> n;
  x[0] = -1;
  back(1);

  return 0;
}
