/* Problem A71 - Way Too Long Words */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> words(n);

  // Taking the words
  for (int i = 0; i < n; i++) {
    cin >> words[i];
    if (words[i].size() > 10) {
      words[i].replace(1, words[i].size() - 2, to_string(words[i].size() - 2));
    }
  }

  for (int i = 0; i < n; i++) {
    cout << words[i] << "\n";
  }

  return 0;
}
