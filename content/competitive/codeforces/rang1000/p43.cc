// https://codeforces.com/problemset/problem/43/A
// Rating: 1000

#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  int c1 = 0, c2 = 0;
  std::string first_team = "";
  std::string second_team = "";

  for (int i = 0; i < n; i++) {
    std::string aux;
    std::cin >> aux;

    if (i == 0) {
      first_team = aux;
    }

    if (aux == first_team) {
      c1++;
    } else {
      second_team = aux;
      c2++;
    }
  }

  if (c1 > c2)
    std::cout << first_team;
  else
    std::cout << second_team;

  return 0;
}
