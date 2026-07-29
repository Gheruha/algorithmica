/*
Requirement
In a warehouse there is a shelf with n+1 storage spaces, numbered from 1 to n+1.
The first n storage spaces are occupied by n packages numbered with values
​​between 1 and n, and storage space n+1 is empty.

The warehouse manager decides to move the packages, so that for any i, the
package numbered with i is in storage space i. For this, the additional storage
space, n+1, will be used, the only valid maneuver being moving a package from
one storage space to another, provided that it is empty.

Determine a sequence of maneuvers through which each package is in the correct
space.

Input data
The input file paquetes.in contains on the first line the number n, and on the
second line n natural numbers separated by spaces. The i-th hosting number of
the package located in the storage space i.

Output
The output file paquete.out will contain on the first line the number M,
representing the number of maneuvers performed. On each of the following M
lines, a maneuver is described, by two numbers i j, with the meaning: the
package is taken from the space and moved to the space j.

Restrictions and specifications
1 ≤ n ≤ 100
for each maneuver i j performed, 1 ≤ i,j ≤ n+1, i ≠ j, and the space must be
empty the number of maneuvers performed must not be minimal
*/
#include <fstream>
#include <utility>
#include <vector>

std::ifstream cin("pachete.in");
std::ofstream cout("pachete.out");

void maneuvers(int n, int a[102], std::vector<std::pair<int, int>> &moves) {
  int empty = n + 1;
  bool sorted = false;

  while (sorted == false) {
    sorted = true;

    for (int i = 1; i <= n + 1; i++) {
      if (i != empty && i != a[i]) {
        a[empty] = a[i];
        a[i] = 0;

        moves.push_back({i, empty});

        empty = i;
        sorted = false;
      }
    }
  }
}

int main() {
  int n;
  cin >> n;

  int a[102];

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  a[n + 1] = 0;

  std::vector<std::pair<int, int>> moves;

  maneuvers(n, a, moves);

  cout << moves.size() << '\n';

  for (const auto &move : moves) {
    cout << move.first << " " << move.second << '\n';
  }

  return 0;
}
