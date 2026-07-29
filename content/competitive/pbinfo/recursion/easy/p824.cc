/*
 Requirement
Write a recursive C++ function that returns the maximum digit of a natural
number passed as a parameter.

Restrictions and specifications
the function name will be cifmax
the function will have a parameter representing the given number
the number for which the maximum digit is calculated will be less than
2,000,000,000 Example cifmax(2050) is 5.

Important
The proposed solution will contain only the definition of the required function.
The presence of other instructions in the solution may lead to compilation or
execution errors that will result in the solution being scored lower.
*/

int cifmax(int n) {
  if (n == 0) {
    return 0;
  }

  int last = n % 10;
  int curr = cifmax(n / 10);

  if (last > curr)
    return last;
  else
    return curr;
}
