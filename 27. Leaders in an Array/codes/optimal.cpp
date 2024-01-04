#include <bits/stdc++.h>
using namespace std;

vector<int> arr = {10, 22, 12, 3, 0, 6};
int main()
{
  int maxi = arr[arr.size() - 1];
  cout << maxi << " "; // end of the array will always be a leader
  for (int i = arr.size() - 2; i >= 0; i--)
  {
    if (arr[i] > maxi)
    {
      cout << arr[i] << " "; // print it as a leader
    }
    maxi = max(maxi, arr[i]);
  }
}