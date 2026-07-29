/* Problem 339B - Xenia & Ringroad
 * * Rang 1000 */
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  unsigned long long n, m, h, a;
  unsigned long long sum = 0;

  cin >> n >> m;

  h = 1;
  for (int i = 0; i < m; ++i) {
    cin >> a;
    if (h <= a) {
      sum += a - h;
    } else {
      sum += n - h + a;
    }
    h = a;
  }

  cout << sum;
  return 0;
}
