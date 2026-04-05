/*
 *Requirement
Read a nonzero natural number n. Display, in lexicographic order, all nonempty
subsets of the set {1,2,..,n}.

Input
The input file submultimi.in contains the number n on the first line.

Output
The output file submultimi.out will contain one subset on each line, the
elements of a subset being separated by a space.

Restrictions and specifications
1 ≤ n ≤ 10
Example:
submultimi.in

4
submultimi.out

1
1 2
1 2 3
1 2 3 4
1 2 4
1 3
1 3 4
1 4
2
2 3
2 3 4
2 4
3
3 4
4
 */
#include <fstream>

std::ifstream cin("submultimi.in");
std::ofstream cout("submultimi.out");
int n;
int x[11];

void show(int step) {
  for (int i = 1; i <= step; i++) {
    cout << x[i] << " ";
  }
  cout << "\n";
}

void back(int step) {
  for (int i = x[step - 1] + 1; i <= n; i++) {
    x[step] = i;
    if (step < n) {
      show(step);
      back(step + 1);
    } else {
      show(step);
    }
  }
}

int main() {
  cin >> n;
  back(1);

  return 0;
}
