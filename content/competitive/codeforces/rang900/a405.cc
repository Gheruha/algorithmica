/* 405A - Gravity Flip. */
// Solution 2 - using self-made algorithms.
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSort(vector<int> arr) {
  if (arr.size() > 1) {
    // Creating left & right array, finding the mid
    vector<int> leftArr;
    vector<int> rightArr;
    int mid = arr.size() / 2;

    // Populating both left & right array
    for (int i = 0; i < mid; ++i) {
      leftArr.push_back(arr[i]);
    }
    for (int i = mid; i < arr.size(); ++i) {
      rightArr.push_back(arr[i]);
    }

    // Recursion -> splitting the array in smaller sub-arrays
    leftArr = mergeSort(leftArr);
    rightArr = mergeSort(rightArr);

    // Comparing
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;

    while (i < leftArr.size() && j < rightArr.size()) {
      if (leftArr[i] < rightArr[j]) {
        arr[k] = leftArr[i];
        ++i;
      } else {
        arr[k] = rightArr[j];
        ++j;
      }

      ++k;
    }

    // Adding leftovers
    while (i < leftArr.size()) {
      arr[k] = leftArr[i];
      ++i;
      ++k;
    }

    while (j < rightArr.size()) {
      arr[k] = rightArr[j];
      ++j;
      ++k;
    }
  }
  return arr;
}

int main() {
  int n;
  cin >> n;
  int cube;

  vector<int> cubes;
  for (int i = 0; i < n; ++i) {
    cin >> cube;
    cubes.push_back(cube);
  }

  cubes = mergeSort(cubes);

  for (size_t i = 0; i < cubes.size(); ++i) {
    cout << cubes[i] << " ";
  }
}
