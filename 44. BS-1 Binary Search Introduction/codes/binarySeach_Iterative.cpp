#include <bits/stdc++.h>
using namespace std;

// increasingly sorted(only contains unique elements)
vector<int> arr = {-3, -1, 0, 4, 5, 6};
int main()
{
  cout << "Enter the target element: ";
  int target;
  cin >> target;

  int i = 0;
  int j = arr.size() - 1;

  while (i <= j)
  {
    int mid = i + (j - i) / 2; // or (i+j)/2

    if (arr[mid] > target) // as array is sorted in increasing order
    {
      j = mid - 1;
    }
    else if (arr[mid] < target)
    {
      i = mid + 1;
    }
    else
    {
      cout << "Element is at index: " << mid;
      break;
    }
  }
}