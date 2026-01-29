#include <iostream>
#include "bitmask/bitmask.hpp"
#include <string>
using namespace std;

void selectFunction(string &option1, string &option2) {
  if (option1 == "-bm") {
    bitmaskToExecute(option2);
  }
}
