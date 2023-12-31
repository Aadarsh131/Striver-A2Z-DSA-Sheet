#include <bits/stdc++.h>
using namespace std;

vector<int> arr = {1, 1, 1, 1, 1, 1, 1, 1, 9, 4, 2, 3, 5, 1, 1, -3, 3, 0, 0, -1, 1, 1, 1, 0, 1};
int main()
{
  cout << "Enter the k: ";
  int k;
  cin >> k;
  int j, i, longest = 0;
  int sum = arr[j];

  //Worst case would be when first j iterates till the end and then i iterates too till the end
  //eg. if k=9 in arr[] = {1,1,1,1,1,1,1,1,9}; here, both j & i would iterate till n-1, hence time complexity = O(2n)
  while (j < arr.size())
  {
    while (sum < k && j < arr.size()) 
    {
      j++;
      if(j<arr.size())
      sum += arr[j];
    }
    while (sum > k)
    {
      sum -= arr[i];
      i++;
    }
    while (sum == k && j < arr.size())
    { // if sum==k
      longest = max(longest, j - i + 1);
      cout << j << "," << i << endl;
      j++;
      if (j < arr.size())
        sum += arr[j];
    }
  }
  cout << longest;
}
