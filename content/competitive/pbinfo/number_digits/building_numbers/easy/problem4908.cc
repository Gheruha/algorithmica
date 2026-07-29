// Resource: https://www.pbinfo.ro/probleme/4908/aldoilea
// The solution involves using temporary variables since sorting is overkill for
// maximum 10 digits
#include <iostream>

int main() {
  int min1 = 10, min2 = 10;
  int max1 = -1, max2 = -1;

  int n;
  std::cin >> n;

  while (n) {
    int d = n % 10;
    n /= 10;

    // Updating min1, min2
    if (d < min1) {
      min2 = min1;
      min1 = d;
    } else if (d < min2) { // Checking for min2 in case that min1 is the lowest
                           // digit possible in the number
      min2 = d;
    }

    if (d > max1) {
      max2 = max1;
      max1 = d;
    } else if (d > max2) { // If max1 is already the maximum the first if will
                           // not happen, however we can still have a new max2
      max2 = d;
    }
  }

  std::cout << max2 << " " << min2;
}
