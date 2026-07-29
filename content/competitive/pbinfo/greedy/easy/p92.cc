/*
 At an office that deals with the analysis of investment projects, n investors
have submitted one project each by the legal deadline.

Requirement
Knowing the time required to analyze each project, write a program that
determines the order in which the projects will be analyzed, so that the average
waiting time for investors is minimal.

Input
On the first line of the file proiecte.in there is a natural number n
representing the number of projects submitted.

On the second line, separated by a space, there are n natural numbers t1, t2, …,
tn, representing the times required to analyze each project.

Output
On the first line of the file proiecte.out there will be n natural numbers
between 1 and n, representing the order in which the projects will be analyzed.

Restrictions and specifications
1 ≤ n ≤ 1000
the numbers on the second line of the input file will be less than or equal to
100:
 */

#include <fstream>

std::ifstream cin("proiecte.in");
std::ofstream cout("proiecte.out");

void sort(int n, int a[1001], int tmp[1001]) {
  for (int i = 1; i <= n; i++) {
    int p = i;
    while (p >= 1 && a[p] < a[p - 1]) {
      int aux = a[p - 1];
      a[p - 1] = a[p];
      a[p] = aux;

      aux = tmp[p - 1];
      tmp[p - 1] = tmp[p];
      tmp[p] = aux;
      p--;
    }
  }
}
int main() {
  int n, a[1001], tmp[1001];
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    tmp[i] = i;
  }

  sort(n, a, tmp);
  for (int i = 1; i <= n; i++) {
    cout << tmp[i] << " ";
  }

  return 0;
}
