#include <iostream>
using namespace std;

void fibonacci_iter(int n) {
  long long a = 0, b = 1;

  for (int i = 0; i < n; i++) {
    cout << a << (i + 1 < n ? ' ' : '\n');
    long long c = a + b;
    a = b;
    b = c;
  }
}

long long fibonacci_recursive(int n) {
  if (n < 2)
    return n;
  return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main() {
  int n;
  cin >> n;

  cout << "O(n) iterative Fibonacci (first " << n << " terms): ";
  fibonacci_iter(n);

  if (n >= 0) {
    cout << "O(2^n) Naive recursive Fibonacci: F(" << n
         << ") = " << fibonacci_recursive(n) << "\n";
  }
  return 0;
}
