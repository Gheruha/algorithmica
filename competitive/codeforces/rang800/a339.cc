/* Problem 339A - Helpful Maths */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<char> numbers;
  for (char c : s) {
    if (c != '+')
      numbers.push_back(c);
  }
  sort(numbers.begin(), numbers.end());

  for (size_t i = 0; i < numbers.size(); ++i) {
    if (i < numbers.size() - 1)
      cout << numbers[i] << "+";
    else
      cout << numbers[i];
  }
  return 0;
}
