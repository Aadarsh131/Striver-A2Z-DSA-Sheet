#include <bits/stdc++.h>
using namespace std;

vector<int> arr = {1, 4, 2, 3, 5, 1, 1, -3, 3, 0, 0, -1, 1, 1, 1, 0};

int main()
{
  cout << "Enter the k: ";
  int k;
  cin >> k;

  map<int, int> sumUpto;

  int longest,sum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    sum += arr[i];
    if (!sumUpto[sum]) // if the key doesn't already exist, then add (this particular case is for 0 in the array)
    {
      sumUpto[sum] = i;
    }

    if (sumUpto[sum - k]) 
    {
      longest = max(longest,i - sumUpto[sum - k]);
    }
  }
  cout << longest; //if k=2, longest = 9 (incl. -ve numbers)
}