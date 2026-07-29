/* Problem 231A - Team */
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int s = 0;
  while (n--) {
    int a, b, c;

    cin >> a >> b >> c;
    s += (a + b + c > 1);
  }

  cout << s; 
  return 0;
}
