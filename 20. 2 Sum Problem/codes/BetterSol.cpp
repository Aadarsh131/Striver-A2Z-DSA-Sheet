#include <bits/stdc++.h>
using namespace std;

void targetSumIndexes(vector<int> arr, int t)
{
  map<int, int> mp;
  for (int i = 0; i < arr.size(); i++)
  {
    if (mp.find(t - arr[i]) != mp.end()) //never check like this- if(mp[t-arr[i]]), it will create a unnecesary key, value pair with the searched value (t-arr[i]) as key and value as 0 on each if block condition check. Also even we can can a logical error here, wwhat if the key does exists but the value is originally has is 0, then instead of if block the else block would get executed
    {
      cout << mp[t - arr[i]] << " and " << i;
      return;
    }
    else
    {
      mp[arr[i]] = i;
    }
  }
}
int main()
{
  vector<int> arr = {2, 6, 5, 8, 1};

  cout << "Enter the target sum: ";
  int t;
  cin >> t;
  targetSumIndexes(arr, t);
}