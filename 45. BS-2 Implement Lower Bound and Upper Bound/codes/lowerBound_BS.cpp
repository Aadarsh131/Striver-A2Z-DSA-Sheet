#include <bits/stdc++.h>
using namespace std;

// since it is sorted, we are doing Binary Search (BS)
vector<int> arr = {1, 1, 2, 2, 3, 3, 5, 5, 6};
int main()
{
  cout << "Enter the number: ";
  int n;
  cin >> n;

  int lb = arr.size(); // 1 greater than the last index

  int i = 0;
  int j = arr.size() - 1;

  while (i <= j)
  {
    int mid = i + (j - i) / 2; // or (i+j)/2

    if (arr[mid] >= n)
    {
      // lb = min(lb, mid);

      // or simply
      lb = mid; // because, left side elements is anyways always less than the previous lb

      j = mid - 1;
    }
    else
    {
      i = mid + 1;
    }
  }
  cout << lb;
}