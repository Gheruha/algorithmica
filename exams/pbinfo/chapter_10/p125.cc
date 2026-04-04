#include <fstream>
#include <iostream>

int n;
int a[9];
int x[9], used[9];
std::ofstream fout("permutari2.out");

void write_out() {
  for (int i = 1; i <= n; i++) {
    fout << a[x[i]] << " ";
  }

  fout << "\n";
}

void back(int k) {
  for (int i = 1; i <= n; i++) {
    if (!used[i]) {
      x[k] = i;
      used[i] = 1;

      if (k < n)
        back(k + 1);
      else
        write_out();

      used[i] = 0;
    }
  }
}

int main() {
  std::ifstream fin("permutari2.in");
  fin >> n;
  for (int i = 1; i <= n; i++) {
    fin >> a[i];
  }
  fin.close();

  for (int i = 1; i < n; i++) {
    int p = i;
    for (int j = i + 1; j <= n; j++) {
      if (a[p] > a[j]) {
        p = j;
      }
    }
    int aux = a[i];
    a[i] = a[p];
    a[p] = aux;
  }

  back(1);
  fout.close();

  return 0;
}
