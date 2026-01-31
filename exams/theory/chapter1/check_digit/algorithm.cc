/* exams/theory/chapter1/control_digit/algorithm.cc
 *
 * You may need to check the theory inside this folder as well.
 * Here you'll find 3 different ways of finding the (check digit)
 * */

#include <iostream>
using namespace std;

int method1(int n) {
  int s;
  while (n > 9) {
    s = 0;
    while (n > 0) {
      s += n % 10;
      n /= 10;
    }

    n = s;
  }
  return s;
}

int method2(int n) {
  while (n > 9) {
    n = n / 10 + n % 10;
  }
  return n;
}

int method3(int n) {
  if (n % 9 == 0) {
    return n;
  } else {
    return n % 9;
  }
}

int main() {
  int n;
  cin >> n;

  cout << "Method 1: " << method1(n) << "\n";
  cout << "Method 2: " << method2(n) << "\n";
  cout << "Method 3: " << method3(n) << "\n";

  return 0;
}
