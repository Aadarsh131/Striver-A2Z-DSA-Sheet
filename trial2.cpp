#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void _4sum(vector<int> a, int target)
{
  vector<vector<int>> valueIndex; // value and index of i,j and k
  int len = a.size();
  for (int i = 0; i < len; i++)
  {
    for (int j = i + 1; j < len; j++)
    {
      vector<pair<int, int>> temp; // value, index
      for (int k = j + 1; k < len; k++)
      {
        int l = -(a[i] + a[j] + a[k]) + target;

        for (const auto &p : temp)
        {
          if (p.first == l)
            valueIndex.push_back({a[i],
                                  i,
                                  a[j],
                                  j,
                                  p.first,
                                  p.second,
                                  a[k], k});
        }
        temp.emplace_back(a[k], k);
      }
    }
  }

  for (auto i : valueIndex)
  {
    for (auto j : i)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  cout << valueIndex.size() << endl;
}

int main()
{
  vector<int> a = {-1, 2, 2, -1, -2, -3, 0, 3};
  int targetSum = 0;
  _4sum(a, targetSum);
}