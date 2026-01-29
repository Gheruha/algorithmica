/* Proble 230A - Dragons.
 * Rang 1000 */
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

bool compare(const pair<int, int> &i, const pair<int, int> &j) {
  return i.first < j.first;
}

int main() {
  int s, n, x, y;
  cin >> s >> n;

  vector<pair<int, int>> dragons;
  for (int i = 0; i < n; ++i) {
    cin >> x >> y;
    dragons.push_back({x, y});
  }

  sort(dragons.begin(), dragons.end(), compare);
  for (size_t i = 0; i < dragons.size(); ++i) {
    if (s > dragons[i].first) {
      s += dragons[i].second;
    } else {
      cout << "NO";
      return 0;
    }
    // cout << dragons[i].first << " " << dragons[i].second << "\n";
  }

  cout << "YES";
  return 0;
}
