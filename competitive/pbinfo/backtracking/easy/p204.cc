/*
 Requirement
Two non-zero natural numbers n and m are read. Determine all strings with m
elements from the set {1,2,..,n}, ordered strictly in ascending order, with the
property that any two consecutive elements in the string have a difference less
than or equal to 2.

Input data
The input file siruri.in contains on the first line the numbers n and m,
separated by a space.

Output data
The output file siruri.out will contain on each line m values, separated by a
space, representing the elements of a string.

Restrictions and specifications
1 ≤ m ≤ n ≤ 15
the strings will be displayed in lexicographic order
*/

#include <fstream>

std::ifstream cin("siruri.in");
std::ofstream cout("siruri.out");

int n, m, x[16];

void show() {
  for (int i = 1; i <= m; i++) {
    cout << x[i] << " ";
  }

  cout << "\n";
}

void back(int step) {
  for (int i = x[step - 1] + 1; i <= n; i++) {
    if (step == 1 || i - (x[step - 1]) <= 2) {
      x[step] = i;
      if (step < m)
        back(step + 1);
      else
        show();
    }
  }
}

int main() {
  cin >> n >> m;
  back(1);
}
