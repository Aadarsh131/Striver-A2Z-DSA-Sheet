#include <bits/stdc++.h>
using namespace std;

vector<int> arr = {2, 6, 5, 8, 1};

void swap(int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int partition(int low, int high)
{
  int i, pivot = low;
  int j = high;
  while (i < j)
  {
    while (arr[i] < arr[pivot] && i <= high)
    {
      i++;
    }
    while (arr[j] > arr[pivot] && j >= low)
    {
      j--;
    }

    if (i < j)
    {
      swap(i, j);
    }
  }
  swap(pivot, j);
  return j;
}

void qs(int low, int high)
{
  if (low < high)
  {
    int partitionIndex = partition(low, high);
    qs(low, partitionIndex - 1);
    qs(partitionIndex + 1, high);
  }
}

int main()
{
  // sort (quick sort - O(nlogn))
  qs(0, arr.size() - 1);

  // OR simply
  // sort(arr.begin(), arr.end());

  // now check for target sum
  cout
      << "Enter the target sum: ";
  int target;
  cin >> target;

  int i = 0;
  int j = arr.size() - 1;

  while (i < j)
  {
    if (arr[i] + arr[j] < target)
    {
      i++;
    }
    else if (arr[i] + arr[j] > target)
    {
      j--;
    }
    else
    {
      // we cannot exactly tell the indexes as we have sorted the array already. We would need to use some storage to keep track of indexes if we need it, which would end increasing the space complexity
      cout << "Target Sum is present";
      break;
    }
  }
}