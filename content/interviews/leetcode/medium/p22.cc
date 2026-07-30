#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  vector<string> generateParenthesis(int n) {
    vector<string> result;
    string current;

    backtrack(n, 0, 0, current, result);
    return result;
  }

private:
  void backtrack(int n, int openCount, int closeCount, string &current,
                 vector<string> &result) {
    if (current.size() == 2 * n) {
      result.push_back(current);
      return;
    }

    if (openCount < n) {
      current.push_back('(');
      backtrack(n, openCount + 1, closeCount, current, result);
      current.pop_back();
    }

    if (closeCount < openCount) {
      current.push_back(')');
      backtrack(n, openCount, closeCount + 1, current, result);
      current.pop_back();
    }
  }
};
