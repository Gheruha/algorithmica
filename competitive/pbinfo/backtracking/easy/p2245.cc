/*
 Requirement
We consider n types of banknotes, with v[1] v[2] ... v[n], ordered
strictly in ascending order. For each type of banknotes, we know the number of
banknotes available c[1] c[2] ... c[n]. We are required to determine a way to
pay in full a given amount S with the available banknotes.

Input
The program reads from the keyboard the numbers n and S, then the v[1] v[2] ...
v[n] of the banknotes and then c[1] c[2] ... c[n].

Output
The program will display n numbers on the screen, representing a way to pay the
amount S. Each number x[i] will represent the number of banknotes of value v[i]
used to pay the amount S.

Restrictions and specifications
1 ≤ n ≤ 6
1 ≤ S ≤ 1000
1 ≤ v[i] ≤ 100
1 ≤ c[i] ≤ 10
any correct variant of paying the amount S will be considered
for all data sets there is a solution
Example:
Input

5 375
1 5 10 50 100
6 3 4 6 1
Output

5 0 2 5 1
Explanation
Five 1-leu banknotes, two 10-leu banknotes, five 50-leu banknotes and one
100-leu banknotes are used: 5 * 1 + 2 * 10 + 5 * 50 + 1 * 100 = 375.
 */
#include <algorithm>
#include <iostream>

bool back(int k, int remaining, int v[6], int c[6], int ans[6]) {
  if (remaining == 0)
    return true;
  if (k < 0)
    return false;

  int maxUsed = std::min(c[k], remaining / v[k]);
  for (int used = maxUsed; used >= 0; used--) {
    ans[k] = used;
    if (back(k - 1, remaining - v[k] * used, v, c, ans))
      return true;
  }

  ans[k] = 0;
  return false;
}

int main() {
  int n, S;
  std::cin >> n >> S;

  int v[6], c[6], ans[6] = {};

  for (int i = 0; i < n; i++) {
    std::cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    std::cin >> c[i];
  }

  back(n - 1, S, v, c, ans);

  for (int i = 0; i < n; i++) {
    std::cout << ans[i] << " ";
  }

  return 0;
}
