/* Problem 263A - Beautiful Matrix */
#include <iostream>
using namespace std;

int main() {
  int x, necessary_steps = 0;
  for (int i = 1; i <= 5; ++i) {
    for (int j = 1; j <= 5; ++j) {
      cin >> x;

      if (x == 1)
        necessary_steps = abs((i - 3)) + abs((j - 3));
    }
  }

  cout << necessary_steps;
  return 0;
}
