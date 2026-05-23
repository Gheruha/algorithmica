/*
 Requirement
Write a recursive C++ function with three parameters n, k, c, which receives a
natural number as parameter n, a digit as parameter k, and returns the number of
digits of n that are greater than or equal to k as parameter c.

Restrictions and specifications
The function name will be cnt_cif
The function will have three parameters: n, k, c, with the above meaning
0 ≤ ​​n ≤ 2,000,000,000
0 ≤ k ≤ 9
Example
After calling cnt_cif(2750, 4, c), the value of c will be 2.

Important
The proposed solution will only contain the definition of the required function.
The presence of other instructions in the solution may lead to compilation or
execution errors that will result in the solution being scored lower.
 */

void cnt_cif(int n, int k, int &c) {
  if (n < 10) {
    if (n >= k)
      c = 1;
    else
      c = 0;
    return;
  }

  cnt_cif(n / 10, k, c);

  if (n % 10 >= k)
    c++;
}
