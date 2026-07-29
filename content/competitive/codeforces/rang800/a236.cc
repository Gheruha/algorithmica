/* Problem 236A - Boy or Girl.
 * Done in the easy way, with unordered_set.
 */

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

  string s;
  cin >> s;

  unordered_set<char> distinct(s.begin(), s.end());
  cout << (distinct.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}
