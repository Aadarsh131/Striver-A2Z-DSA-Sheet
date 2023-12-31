#include <bits/stdc++.h>
using namespace std;

int arr1[] = {1, 2, 2, 3, 3, 4, 5};
int arr2[] = {0, 1, 2, 4, 4, 5, 5, 6, 6};

int main()
{
  vector<int> unionn = {999};

  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int n2 = sizeof(arr2) / sizeof(arr2[0]);

  int i = 0;
  int j = 0;

  while (i < n1 && j < n2)
  {
    while (arr1[i] < arr2[j])
    {
      if (arr1[i] != unionn.back())
      {
        unionn.emplace_back(arr1[i]);
      }
      i++;
    }
    while (arr2[j] < arr1[i])
    {
      if (arr2[j] != unionn.back())
      {
        unionn.emplace_back(arr2[j]);
      }
      j++;
    }
    while (arr1[i] == arr2[j])
    {
      if (arr1[i] != unionn.back())
      {
        unionn.emplace_back(arr1[i]);
      }
      i++;
      j++;
    }
  }

  while (i < n1)
  {
    if (arr1[i] != unionn.back())
    {
      unionn.emplace_back(arr1[i]);
    }
    i++;
  }
  while (j < n2)
  {
    if (arr2[j] != unionn.back())
    {
      unionn.emplace_back(arr2[j]);
    }
    j++;
  }

  //print
  for (int i = 1; i < unionn.size(); i++)
  {
    cout << unionn[i];
  }
}