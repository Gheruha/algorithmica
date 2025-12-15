/* Problem 479A - Expression
 * Rang 1000 */
#include <iostream>
using namespace std;

// This is a brute force way, I'll try a smarter choice next time.
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c, max = 0;
  cin >> a >> b >> c;

  max = (a + b + c > max) ? a + b + c : max;
  max = (a * (b + c) > max) ? a * (b + c) : max;
  max = ((a + b) * c > max) ? (a + b) * c : max;
  max = (a * b * c > max) ? a * b * c : max;
  max = (a * b + c > max) ? a * b + c : max;
  max = (a + b * c > max) ? a + b * c : max;

  cout << max;

  return 0;
}
