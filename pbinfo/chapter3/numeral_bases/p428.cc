/* Requirement
A number b is read, representing a base of numeration, and then n natural
numbers, representing the digits of a number written in base b. Determine the
transformation of this number into base 10.

Input
The program reads the numbers b n from the keyboard, and then n natural numbers,
separated by spaces.

Output
The program displays the number S on the screen, representing the required
value.

Restrictions and specifications
2 ≤ b ≤ 9
1 ≤ n ≤ 10
the n numbers read will be smaller than b
Example:
Input

5 6
1 0 2 2 4 1
Output

3446
*/
#include <iostream>

int main() {
  int b, n;
  std::cin >> b >> n;

  int res = 0;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    res = res * b + x;
  }

  std::cout << res;
}
