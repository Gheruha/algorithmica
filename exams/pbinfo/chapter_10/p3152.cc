/*
* Requirement
Two natural numbers n and m are read. Display in lexicographic order all subsets
with m elements of the set {1, 2, ..., n} in which no two even elements are
adjacent.

Input
The program reads the numbers n and m from the keyboard.

Output
The program will display the required subsets on the screen, one on each line
and with elements separated by a space.

Restrictions and specifications
1 ≤ m < n ≤ 20
Example:
Input

5 3
Output

1 2 3
1 2 5
1 3 4
1 3 5
1 4 5
2 3 4
2 3 5
3 4 5
Explanation
The numbers 2 and 4 do not appear in adjacent positions.
*/
#include <iostream>

int n, m;
int x[21];

void show() {
  for (int i = 1; i <= m; i++) {
    std::cout << x[i] << " ";
  }
  std::cout << "\n";
}

void back(int step) {
  for (int i = x[step - 1] + 1; i <= n; i++) {
    x[step] = i;

    if (step > 1 && x[step] % 2 == 0 && x[step - 1] % 2 == 0)
      continue;
    else if (step < m)
      back(step + 1);
    else
      show();
  }
}

int main() {
  std::cin >> n >> m;
  back(1);
  return 0;
}
