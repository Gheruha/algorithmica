/* Proble 122A - Lucky Division
 * Rang 1000 */
#include <iostream>
using namespace std;

bool isLucky(int i) {
  while (i > 0) {
    if (i % 10 != 7 && i % 10 != 4)
      return false;
    i /= 10;
  }

  return true;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  for (int i = 4; i <= n; ++i) {
    if (isLucky(i) && n % i == 0) {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";
  return 0;
}
