#include <bits/stdc++.h>
using namespace std;

vector<int> arr = {1, 4, 2, 3, 5, 1, 1, 3, 0, 1, 1, 1, 0};
int main()
{
  cout << "Enter the k: ";
  int k;
  cin >> k;

  int longest = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    int sum = 0;
    for (int j = i; j < arr.size(); j++)
    {
      sum += arr[j];
      if (sum == k)
      {
        longest = max(longest, j-i+1);
      }
    }
  }
  cout << longest;
}