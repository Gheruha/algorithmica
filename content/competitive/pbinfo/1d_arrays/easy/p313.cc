/*
 Requirement
Given a matrix with n rows and n columns and natural number elements. Calculate
the difference in absolute value between the sums of the elements on the two
diagonals.

Input
The program reads from the keyboard the number n, and then n*n natural numbers,
separated by spaces, representing the elements of the matrix, line by line.

Output
The program displays the number D on the screen, representing the calculated
value.

Restrictions and specifications
1 ≤ n ≤ 20
the elements of the matrix will be less than 10000
Example:
Input

4
8 3 3 7
1 1 6 5
8 7 1 1
9 8 7 1
Output

18
Explanation
The sums of the elements on the two diagonals are: 11 and 29. The difference in
absolute value is: 18
*/

#include <iostream>

int main() {
  int a[101][101];

  int n;
  std::cin >> n;
  int sum1 = 0, sum2 = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cin >> a[i][j];

      if (i == j)
        sum1 += a[i][j];
      if (i + j == n - 1)
        sum2 += a[i][j];
    }
  }

  int res = sum1 - sum2;
  if (res < 0)
    res = -res;

  std::cout << res;
  return 0;
}
