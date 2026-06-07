/*
 Requirement
A festival has n shows scheduled. For each show, the start and end times are
known, expressed as natural numbers. A spectator wants to watch as many shows as
possible in their entirety.

Determine the maximum number of shows that can be watched without overlapping.

Input
The input file spetkole.in contains the number n on the first line. Each of the
next n lines contains two natural numbers X Y, representing the start and end
times of a show.

Output
The output file spetkole.out will contain the number S on the first line,
representing the maximum number of shows that can be watched without
overlapping.

Restrictions and specifications
1 ≤ n ≤ 100
the start and end times of the shows are natural numbers less than 1,000,000
for each show, X < Y
if the start time of one show and the end time of another show coincide, both
shows can be watched
 */

#include <fstream>
#include <utility>
#include <vector>

std::ifstream cin("spectacole.in");
std::ofstream cout("spectacole.out");

void sort_shows(int n, std::vector<std::pair<int, int>> &shows) {
  for (int i = 0; i < n - 1; i++) {
    int p = i;

    for (int j = i + 1; j < n; j++) {
      if (shows[j].second < shows[p].second) {
        p = j;
      }
    }

    std::pair<int, int> aux = shows[i];
    shows[i] = shows[p];
    shows[p] = aux;
  }
}

int max_shows(int n, std::vector<std::pair<int, int>> &shows) {
  int cnt = 0;
  int last = -1;
  for (int i = 0; i < n; i++) {
    if (shows[i].first >= last) {
      cnt++;
      last = shows[i].second;
    }
  }

  return cnt;
}

int main() {
  int n;
  cin >> n;
  std::vector<std::pair<int, int>> shows(n);

  for (int i = 0; i < n; i++) {
    cin >> shows[i].first >> shows[i].second;
  }

  sort_shows(n, shows);
  cout << max_shows(n, shows);

  return 0;
}
