/*
Requirement
Write a recursive C++ function that returns the number of zero digits of a
natural number passed as a parameter.

Restrictions and specifications
the function name will be nr_cif_zero
the function will have a parameter representing the given number
the number for which the number of zero digits is calculated will be less than
2,000,000,000 Example nr_cif_zero(2050) is 2.

Important
The proposed solution will only contain the definition of the required function.
The presence of other instructions in the solution may lead to compilation or
execution errors that will result in the solution being scored lower.
*/
int nr_cif_zero(int x) {
  if (x == 0) {
    return 1;
  }

  if (x < 10) {
    return 0;
  }

  if (x % 10 == 0) {
    return 1 + nr_cif_zero(x / 10);
  }

  return nr_cif_zero(x / 10);
}
