/*
 * A natural number is given. Modify this number by decreasing each odd digit by
 * one. If the result given is 275, it will be 264.
 *
 * We need to use the theory from theory/chapter1/building_numbers to be able to
 * solve this problem. Also, we need to know how to get the digits of a number.
 * Look in theory/chapter1/get_digits_of_number if you need.
 * */

#include <iostream>
using namespace std;

int main() {
  int n, R = 0, p = 1;
  cin >> n;

  while (n) {
    int ld = n % 10; // ld means last digit.
    if (ld % 2 == 0) {
      R += p * ld;
    } else {
      R += p * (ld - 1);
    }

    p *= 10;
    n /= 10;
  }

  cout << R;
  return 0;
}
