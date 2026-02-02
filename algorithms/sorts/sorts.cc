/* implemented and explained through commentaries. */
#include <iostream>
#include <vector>
using namespace std;

// The vector used for every sorting algorithm.
vector<int> vec = {8, 2, 4, 10, 1, 5, 5, 6, 7};

// Display sorted vector function.
void display(vector<int> &vec) {
  cout << "Sorted vector: [";
  for (auto i : vec) {
    cout << i << ", ";
  }
  cout << "]\n";
}
// 'Merge' algorithm (check 'Merge Sort' first below).
void merge(vector<int> &leftVec, vector<int> &rightVec, vector<int> &vec) {
  int leftSize = leftVec.size();
  int rightSize = rightVec.size();

  // Check the conditions for merging.
  int l = 0, r = 0; // initialize both indices
  vector<int> tmp;  // collect merged result here
  tmp.reserve(leftSize + rightSize);

  while (l < leftSize && r < rightSize) {
    if (leftVec[l] <= rightVec[r]) { // <= for stability
      tmp.push_back(leftVec[l]);
      ++l;
    } else {
      tmp.push_back(rightVec[r]);
      ++r;
    }
  }

  // Drain the rest (if one side still has elements).
  while (l < leftSize) {
    tmp.push_back(leftVec[l]);
    ++l;
  }
  while (r < rightSize) {
    tmp.push_back(rightVec[r]);
    ++r;
  }

  // Overwrite vec with the merged, sorted data.
  vec = std::move(tmp);
}

// 'Merge Sort' algorithm.
void mergeSort(vector<int> &vec) {
  // We always need the size of the array to know when to stop.
  int size = vec.size();
  if (size <= 1)
    return;

  // For merge function middle, left vector and right vector are needed.
  int middle = size / 2;

  // Build sub-arrays correctly (avoid pre-sizing + push_back bug).
  vector<int> leftVec(vec.begin(), vec.begin() + middle);
  vector<int> rightVec(vec.begin() + middle, vec.end());

  // Recursive calls for the left & right vectors.
  mergeSort(leftVec);
  mergeSort(rightVec);
  merge(leftVec, rightVec, vec);
}

void sortToExecute(string option) {
  if (option == "-ms") {
    mergeSort(vec);
    display(vec);
  }
}
