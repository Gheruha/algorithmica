/* 2132B: The Secret Number. */
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    unsigned long long n;
    cin >> n;

    vector<unsigned long long> res;
    unsigned long long p = 10;          // 10^1
    for (int k = 1; k <= 18; ++k) {     // enough for n <= 1e18
      unsigned long long denom = 1 + p; // 1 + 10^k
      if (denom > n)
        break; // x >= 1
      if (n % denom == 0) {
        res.push_back(n / denom);
      }
      p *= 10;
    }

    if (res.empty()) {
      cout << 0 << '\n';
    } else {
      sort(res.begin(), res.end()); // ascending order required
      cout << res.size() << '\n';
      for (size_t i = 0; i < res.size(); ++i) {
        if (i)
          cout << ' ';
        cout << res[i];
      }
      cout << '\n';
    }
  }
  return 0;
}
