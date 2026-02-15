#include <iostream>

/* Finding lcm.
 * 1. n = a, m = b.
 * 2. while n != m.
 *    2.1 if n < m: n = n + a.
 *    2.2 else: m = m + b.
 * 3. When their equal, this is the lcm(a,b).
 *
 * */

int main() {
  int a, b, n, m;
  std::cin >> a >> b;

  n = a;
  m = b;

  while (n != m) {
    if (n < m)
      n += a;
    else
      m += b;
  }

  std::cout << "lcm(" << a << "," << b << "): " << n;
  return 0;
}
