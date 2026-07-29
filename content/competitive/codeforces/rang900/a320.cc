/* Problem 320A - Magic numbers. */
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s = to_string(n);

  for (size_t i = 0; i < s.size();) {
    if (i + 3 <= s.size() && s.substr(i, 3) == "144")
      i += 3;
    else if (i + 2 <= s.size() && s.substr(i, 2) == "14")
      i += 2;
    else if (s[i] == '1')
      i += 1;
    else {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}
