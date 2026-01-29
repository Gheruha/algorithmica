/* Problem 160A - Twins. */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n = 0;

  cin >> n;
  vector<int> coins(n);

  int sum = 0;
  for (int i = 0; i < n; ++i) {
    cin >> coins[i];
    sum += coins[i];
  }

  int half = sum / 2;
  sort(coins.begin(), coins.end());

  int sum2 = 0;
  int i = n - 1;
  int nr = 0;
  for (; i >= 0; --i) {
    ++nr;
    sum2 += coins[i];
    if (sum2 > half) {
      cout << nr;
      return 0;
    }
  }

  return 0;
}
