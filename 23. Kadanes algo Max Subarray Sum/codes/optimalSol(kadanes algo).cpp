#include <bits/stdc++.h>
using namespace std;

vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
// vector<int> arr = {-2, -3, -4, -1, -2, -3};

int main()
{
  int maximum = INT_MIN;
  int sum = 0;
  int low = 0;

  for (int i = 0; i < arr.size(); i++)
  {
    if (sum == 0)
      low = i;

    sum += arr[i];
    if (sum > maximum)
    {
      maximum = sum;
      // this shows the maximum subarray indexes at different points, to find the final maximum subarray sum's indices, use a map
      cout << "[" << low << " to " << i << "] ";
    }
    if (sum < 0)
    {
      sum = 0;
    }
  }
  cout << "Maximum subarray sum is: " << maximum;
}