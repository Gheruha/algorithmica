/* bitmask.cc - here the user can find examples of bitmasking explained with
 * comments. */

#include <iostream>
using namespace std;

void examples() { cout << "Bitmasking\n"; }

void bitmaskToExecute(string &option) {
  if (option == "-e") {
    examples();
  }
}
