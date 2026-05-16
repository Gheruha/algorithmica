/*
Write a recursive C++ function that returns the greatest common divisor of two
numbers passed as parameters.

Restrictions and specifications
the name of the function written is cmmdc;
the function has two parameters, non-zero natural numbers less than
1,000,000,000. Example cmmdc(18 , 24) is 6.

Important
The proposed solution will contain only the required function. Introducing other
instructions into the solution may lead to compilation or execution errors,
which will lead to the solution being scored lower.
*/

#include <iostream>

int cmmdc(int a, int b) {
  if (b == 0) {
    return a;
  }
  return cmmdc(b, a % b);
}

int main() {
  int a = 24;
  int b = 18;
  std::cout << cmmdc(a, b);

  return 0;
}
