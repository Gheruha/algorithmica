/* Problem 58A - Chat Room
 * Rang 1000
 * */
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  string target = "hello";
  size_t j = 0;

  cin >> s;

  for (size_t i = 0; i < s.size(); ++i) {
    if (s[i] == target[j])
      ++j;
    if (j == 5)
      break;
  }

  cout << (j == target.size() ? "YES" : "NO");
  return 0;
}
