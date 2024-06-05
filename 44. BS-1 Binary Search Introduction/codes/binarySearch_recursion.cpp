#include <bits/stdc++.h>
using namespace std;

vector<int> arr = {1, 2, 4, 5, 6};

int bs(int i, int j, int target)
{
  if (i <= j)
  {
    int mid = i + (j - i) / 2; // or (i+j)/2
    if (arr[mid] < target)
    {
      i = mid + 1;
      bs(i, j, target);
    }
    else if (arr[mid] > target)
    {
      j = mid - 1;
      bs(i, j, target);
    }
    else
    {
      return mid;
    }
  }
  else
  {
    return -1;
  }
}
int main()
{
  cout << "Enter the target element: ";
  int target;
  cin >> target;

  int i = 0;
  int j = arr.size() - 1;
  cout << bs(i, j, target);
}