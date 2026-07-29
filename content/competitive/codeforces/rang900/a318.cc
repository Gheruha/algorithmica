/* Problem 318A - Even Odds. */
#include <iostream>
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  long long half = n / 2;

  if (n % 2 != 0) {
    if (k <= (half + 1)) {
      cout << (1 + ((k - 1) * 2));
    } else {
      cout << ((k - half) - 1) * 2;
    }
  } else {
    if (k <= half) {
      cout << 1 + ((k - 1) * 2);
    } else {
      cout << (k - half) * 2;
    }
  }

  return 0;
}
