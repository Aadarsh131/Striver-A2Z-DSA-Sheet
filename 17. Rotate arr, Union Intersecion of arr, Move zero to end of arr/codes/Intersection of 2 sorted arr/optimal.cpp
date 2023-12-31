#include <bits/stdc++.h>
using namespace std;

int arr1[] = {1, 2, 2, 3, 3, 4, 5};
int arr2[] = {0, 1, 2, 2, 4, 4, 5, 5, 6, 6};

int main()
{
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int n2 = sizeof(arr2) / sizeof(arr2[0]);

  int i, j = 0;

  vector<int> intersection;

  while (i < n1 && j < n2)
  {
    if (arr1[i] < arr2[j]) // in this case we can be sure that there is no corresponding element in the second arr, as it is two sorted arrays
      i++;
    else if (arr2[j] < arr1[i])
      j++;
    else
    {
      intersection.emplace_back(arr1[i]);
      i++;
      j++;
    }
  }

  for (auto it : intersection)
  {
    cout << it << " "; // 1 2 2 4 5
  }
}