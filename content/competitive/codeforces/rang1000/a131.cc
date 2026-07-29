/* Proble 131A - cAPS LOCK
 * Rang 1000 */
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  bool allUpper = true;
  for (size_t i = 1; i < s.size(); ++i) {
    if (!isupper((unsigned char)s[i])) {
      allUpper = false;
      break;
    }
  }
  if (allUpper) {
    for (char &ch : s) {
      ch = (isupper((unsigned char)ch)) ? tolower(ch)
                                        : toupper((unsigned char)ch);
    }
  }

  cout << s;

  return 0;
}
