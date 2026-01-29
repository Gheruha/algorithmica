/* Problem 1A - Theathre square */
#include <cmath>
#include <iostream>
using namespace std;

int main() {

  unsigned long long m, n, a;
  cin >> m >> n >> a;

  unsigned long long cols = (m + a - 1) / a;
  unsigned long long rows = (n + a - 1) / a;

  cout << cols * rows;

  return 0;
}
