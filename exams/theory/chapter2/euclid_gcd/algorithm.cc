// There are 2 ways we can implement Euclid's algorithm:
//  1. By substraction.
//  2. By multiplication.

#include <iostream>
#include <vector>

// 1. Euclid's algorithm implemented by substraction.
int euclid1(int n, int m) {
  // 1. We need to understand that the gcd of n and m is equal to their
  // difference since their difference is just a difference of 2 multiples of n.
  // 2. We substract the smaller number from the bigger one.
  // 3. When they're equal, the answer is straight forward, is their value.
  // (n,n) since m = n, => n is the gcd.
  while (n != m) {
    if (n > m)
      n -= m;
    else
      m -= n;
  }
  return n;
}

// 2. Euclid's algorithm implemented by multiplication;
int euclid2(int n, int m) {
  /* Intuition:
   * Useful Resource: https://www.youtube.com/watch?v=8cikffEcyPI
   *
     Why is it working: the greatest common divisor of 2 numbers divides the
     remaining of their divison as well. */

  while (m != 0) {
    int r = n % m;
    n = m;
    m = r;
  }

  return n;
}

/* 3. Gcd on multiple numbers:
 *    1. We find the gcd on the first two numbers.
 *    2. Then we find the gcd between the previous gcd and the third number.
 *    3. Then we find the gcd between the previoous gcd and the fourth number.
 *    4. We continue this way.
 * */
void euclid_on_multiple_numbers(std::vector<int> numbers) {
  if (numbers.size() > 0) {
    for (int i = 0; i < numbers.size() - 1; i++) {
      int n = numbers[i];
      int m = numbers[i + 1];

      std::cout << euclid2(n, m) << "\n";
    }
  }
}

int main() {
  int n, m;
  std::cin >> n >> m;

  std::cout << euclid1(n, m) << "\n";
  std::cout << euclid2(n, m) << "\n";

  std::cout << "How many elements in the vector: ";
  int nr, elem;
  std::cin >> nr;

  std::vector<int> numbers;
  for (int i = 0; i < nr; i++) {
    std::cout << "[" << i + 1 << "]: ";
    std::cin >> elem;
    numbers.push_back(elem);
  }

  euclid_on_multiple_numbers(numbers);

  return 0;
}
