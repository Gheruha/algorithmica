/*
In the yard of a car repair shop, there are n cars that need to be repaired.
Since there are not enough mechanics, only one car can be worked on at any given
time.

Requirement
Knowing the time required to repair each car, write a program that calculates
the maximum number of cars that can be repaired in a time interval T.

Input
On the first line of the file masini.in there are two natural numbers n and T
separated by a single space, representing the number of cars in the yard of the
car repair shop and the total time that will be worked on.

On the second line, separated by a space, there are n natural numbers t1, t2, …,
tn, representing the times required to repair each car.

Output
On the first line of the file masini.out there will be a natural number k,
representing the maximum number of cars that can be repaired.

Restrictions and specifications
1 < n, T <= 1000
the numbers on the second line of the input file will be less than or equal to
100
*/
#include <fstream>
#include <iostream>

std::ifstream cin("masini.in");
std::ofstream cout("masini.out");

void sort(int a[1001], int n) {
  for (int i = 0; i < n; i++) {
    int p = i;
    while (p > 0 && a[p] < a[p - 1]) {
      int aux = a[p - 1];
      a[p - 1] = a[p];
      a[p] = aux;
      p--;
    }
  }
}

void max_repaired(int n, int T, int a[1001], int cnt) {
  for (int i = 0; i < n; i++) {
    if (T - a[i] >= 0) {
      T -= a[i];
      cnt++;
    }
  }

  cout << cnt;
}

int main() {
  int n, T, a[1001];
  cin >> n >> T;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, n);
  max_repaired(n, T, a, 0);

  return 0;
}
