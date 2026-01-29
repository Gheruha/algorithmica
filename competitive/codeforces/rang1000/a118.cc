/* Problem 118A - String task */
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  string vowels = "aeiouyAEIOUY";
  string out = "";

  for (char ch : s) {

    if (vowels.find(ch) == string::npos) {
      out += '.';
      out += tolower(ch);
    }
  }

  cout << out;

  return 0;
}
