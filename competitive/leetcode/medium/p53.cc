/*
  MEDIUM: LEETCODE
  Problem 53: Maximum Subarray
*/

#include <vector>
using namespace std;

class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    int Smax = nums[0], Scurr = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (Scurr < 0)
        Scurr = 0;
      Scurr += nums[i];

      if (Smax < Scurr)
        Smax = Scurr;
    }

    return Smax;
  }
};
