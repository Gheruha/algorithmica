/*
Requirement
Write a recursive C++ function that determines the maximum and minimum digits of
a natural number passed as a parameter. The return function via output
parameters.

Restrictions and specifications
the function name will be cifmaxmin
the function will have three parameters:
n, the given number
max, the maximum digit of n
min, the minimum digit of n
the order of the parameters is: n max min
n will be less than 2,000,000,000
Important
The proposed solution will only contain the definition of the required function.
The presence of other instructions in the solution may lead to compilation or
execution errors that will result in the solution being scored lower.
*/

int cifmaxmin(int n, int &max, int &min) {
  if (n < 0) {
    max = n;
    min = n;
  }
  cifmaxmin(n / 10, max, min);

  int digit = n % 10;
  if (digit > max)
    max = digit;
  if (digit < min)
    min = digit;
}
