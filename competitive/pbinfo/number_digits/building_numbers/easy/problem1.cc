// Determine the mirror image of a number n

// We need to use the theory from theory/chapter1/building_numbers to be able to
// solve this problem. Also, we need to know how to get the digits of a number.
// Look in theory/chapter1/get_digits_of_number if you need.

#include <iostream>
using namespace std;
int main() {
  int n;
  int mirror = 0;
  cin >> n;
  while (n) {
    mirror = mirror * 10 + n % 10;
    n /= 10;
  }

  cout << mirror;
  return 0;
}
