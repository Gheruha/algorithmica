/* Problem 282A - Bit++ */
#include <iostream>
using namespace std;

int main() {
  int n, plus;
  int x = 0;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    plus = 0;
    for (int j = 0; j < 3; j++) {
      char value;
      cin >> value;

      if (value == '+')
        ++plus;
    }
    if (plus == 2)
      x += 1;
    else
      x -= 1;
  }

  cout << x;

  return 0;
}
