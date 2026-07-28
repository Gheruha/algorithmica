// Resource: https://www.pbinfo.ro/probleme/4867/asociat
#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int s1 = 0, s2 = 0;
  int x = a, y = b;

  while (x) {
    s1 += x % 10;
    x /= 10;
  }
  while (y) {
    s2 += y % 10;
    y /= 10;
  }

  bool ok1 = (s1 % 2 == 0) || (s1 % 3 == 0) || (s1 % 5 == 0);
  bool ok2 = (s2 % 2 == 0) || (s2 % 3 == 0) || (s2 % 5 == 0);

  cout << ((ok1 && ok2) ? "DA" : "NU");
}
