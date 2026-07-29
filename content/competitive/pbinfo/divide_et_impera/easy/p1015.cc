/*
Requirement
A string with n elements, natural numbers, is considered. Using the Divide et
Impera method, determine the sum of the elements of this string.

Input data
The program reads the number n from the keyboard, and then the n elements of the
string.

Output data
The program will display the number S on the screen, representing the required
sum.

Restrictions and specifications
1 ≤ n ≤ 1000
the elements of the string will be less than 1,000,000
it is recommended to use the Divide et Impera method
*/
#include <iostream>

int sum(int l, int r, int a[1001]) {
  if (l == r)
    return a[l];
  else {
    int mid = (l + r) / 2;
    return sum(l, mid, a) + sum(mid + 1, r, a);
  }
}

int main() {
  int n;
  std::cin >> n;

  int a[1001];
  for (int i = 1; i <= n; i++) {
    std::cin >> a[i];
  }

  std::cout << sum(1, n, a);
}
