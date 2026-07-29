// Resource: https://www.pbinfo.ro/probleme/4868/echilibru
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int copy = n;
  int sumRight = 0, sumLeft = 0;

  int tmp = n;
  int nr_digits = 0;
  while (tmp) {
    tmp /= 10;
    nr_digits++;
  }

  if (nr_digits % 2 == 1) {
    cout << "NU";
    return 0;
  }

  int half = nr_digits / 2;

  for (int i = 0; i < nr_digits; i++) {
    int d = copy % 10;
    copy /= 10;

    if (i < half)
      sumRight += d;
    else
      sumLeft += d;
  }

  if (sumLeft == sumRight)
    cout << sumLeft; 
  else
    cout << "NU";
}
