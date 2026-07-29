/* 208A - Dubstep */
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  string word = "";
  string words = "";

  for (size_t i = 0; i < s.size(); ++i) {
    if (s.substr(i, 3) == "WUB") {
      i += 2;
      if (word.size() > 0) {
        words = words + word + " ";
        word = "";
      }
    } else {
      word += s[i];
    }
  }

  if (word != "") {
    words = words + word + " ";
  }

  cout << words;
}
