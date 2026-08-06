#include <iostream>
#include <vector>

int main() {
  int t;
  std::cin >> t;

  std::vector<int> health_scores(t);

  for (int i = 0; i < t; i++) {
    int n;
    std::cin >> n;

    std::vector<int> f(1001, 0);
    int total = 0;

    for (int j = 0; j < n; j++) {
      int a;
      std::cin >> a;
      f[a]++;
      total += a;
    }

    int most_value = 0;
    int most_count = 0;

    for (int value = 1; value <= 1000; value++) {
      if (f[value] > most_count) {
        most_count = f[value];
        most_value = value;
      }
    }

    int other_count = n - most_count;

    if (most_count <= other_count + 1) {
      health_scores[i] = total;
    } else {
      int other_sum = total - most_value * most_count;
      health_scores[i] = other_sum + most_value * (other_count + 2);
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << health_scores[i] << "\n";
  }

  return 0;
}
