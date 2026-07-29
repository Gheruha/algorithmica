/* Problem 112A - Petya & strings */
#include <iostream>
using namespace std;

int main() {
  string f, s;
  cin >> f >> s;

  for (char &c : f)
    c = tolower(c);
  for (char &c : s)
    c = tolower(c);

  if (f < s)
    cout << -1;
  else if (f > s)
    cout << 1;
  else
    cout << 0;
  return 0;
}
