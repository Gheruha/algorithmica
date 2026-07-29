/* Problem 158A - Next Round */
#include <iostream>
using namespace std;

int main() {

  int n, k, a;
  cin >> n >> k;

  int next = 0;
  int min = 1;
  for (int i = 1; i <= n; ++i) {
    cin >> a;
    if (i == k && a > 0)
      min = a;
    if (a >= min)
      next++;
  }

  cout << next;
  return 0;
}
