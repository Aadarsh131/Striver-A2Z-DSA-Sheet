#include <bits/stdc++.h>

using namespace std;

class Solution {
  vector<int> Res;

public:
  vector<int> minDifference(vector<int> &nums, vector<vector<int>> &queries) {
    multimap<int, pair<int, int>> mp;

    int len = nums.size();
    for (int i = 0; i < len - 1; i++) {
      for (int j = i + 1; j < len; j++) {
        int x = abs(nums[j] - nums[i]);
        if (!x) {
          x = -1;
        }
        mp.insert({x, {i, j}});
      }
    }
    printMp(mp);
    mp.erase(-1);
    cout << string('-', 100);
    printMp(mp);

    for (auto &i : queries) {
      bool pushedFlag = false;
      for (auto &j : mp) {
        // just to reduce complexity
        if (i[1] == i[0] + 1) { // logic for -1s
          // and also if the values inside the nums match then res.push_back(-1)
          if (nums[i[0]] == nums[i[1]]) {
            Res.push_back(-1);
            pushedFlag = true;
            break;
          }
        }
        if (checkForRange(i[0], i[1], j.second.first, j.second.second,
                          j.first)) {
          pushedFlag = true;
          break;
        }
      }
      if (!pushedFlag)
        Res.push_back(-1);
    }
    // printMp(mp);
    printVec(Res);
    return Res;
  }

private:
  void printMp(multimap<int, pair<int, int>> mp) {
    for (auto i : mp) {
      cout << i.first << " {" << i.second.first << "," << i.second.second << "}"
           << endl;
    }
  }
  void printVec(vector<int> v) {
    cout << "[";
    for (auto i : v) {
      cout << i << ",";
    }
    cout << "]" << endl;
  }
  bool checkForRange(int i, int j, int a, int b,
                     int value) // i and j are indecies of queries, a and b from
                                // sorted multimap
  {

    if ((i < a || i == a) && (j > b || j == b)) {
      Res.push_back(value);
      return true;
    }
    return false;
  }
};
int main() {
  // vector<int> nums = {1, 3, 4, 8};
  // vector<vector<int>> queries = {{0, 1}, {1, 2}, {2, 3}, {0, 3}};

  // vector<int> nums = {1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3};
  // vector<int> nums = {15, 12, 15, 3, 9, 1, 14, 6, 10, 9};
  vector<vector<int>> queries = {{2, 6}, {2, 3}, {4, 7}, {0, 6}, {3, 9},
                                 {3, 9}, {1, 7}, {8, 9}, {2, 4}, {2, 9}};

  vector<int> nums = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
                      7, 7, 7, 7, 7, 2, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
                      7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

  // vector<int> nums = {4, 5, 1, 3, 4, 8};

  // sort(nums[1], nums[3]);
  // sort(nums.begin() + 1, nums.begin() + 3);
  // for (auto i : nums) {
  //   cout << i;
  // }

  Solution a;
  a.minDifference(nums, queries);
}