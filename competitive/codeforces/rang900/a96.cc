/* Problem 96A - Football. */
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  int n = 0;
  char temp = ' ';
  for (char c : s) {
    if (temp != c) {
      temp = c;
      n = 0;
    }
    ++n;
    if (n >= 7) {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";
  return 0;
}
