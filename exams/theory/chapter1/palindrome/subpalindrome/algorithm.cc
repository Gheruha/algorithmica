#include <iostream>
#include <string>

int expandAroundCenter(std::string s, int n, int l, int r) {
  while (l >= 0 && r < n && s[l] == s[r]) {
    l--;
    r++;
  }
  return r - l - 1;
}

int main() {
  std::string s;
  std::cin >> s;
  int n = s.size();

  int max = 1;
  for (int i = 0; i < n; i++) {
    int len1 = expandAroundCenter(s, n, i, i);     // ODD substring size.
    int len2 = expandAroundCenter(s, n, i, i + 1); // EVEN substring size.

    if (len1 > max)
      max = len1;
    if (len2 > max)
      max = len2;
  }

  std::cout << "Longest palindrome substring size: " << max << "\n";
  return 0;
}
