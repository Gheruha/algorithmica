/* Useful Resource: https://www.pbinfo.ro/articole/65/cifrele-unui-numar
 *
 * Getting digits of a number
 * Lots of problems will require the students to be able to understand if the
 * algorithm can get the digits of a number. It is a very easy topic, the
 * algorithm can stay in your head your entire life - you just need to
 * understand how C++ understands the divisions of the int variables.
 *
 * Things to understand:
 * 1. The last digit of n is n % 10. Example: 274 % 10 = 4.
 * 2. To crop n -> n /= 10. Example: 274 / 10 = 27.
 * 3. If n = 0 -> no more digits left. Example 2 / 10 = 0.
 * */

#include <iostream>
using namespace std;

int main() {

  int n = 274;
  while (n != 0) {
    int ld = n % 10; // ld comes from (l-last d-digit)
    cout << ld << " ";
    n /= 10;
  }

  return 0;
}
