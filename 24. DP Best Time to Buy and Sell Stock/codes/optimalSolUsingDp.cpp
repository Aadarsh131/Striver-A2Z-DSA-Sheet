#include <bits/stdc++.h>
using namespace std;

vector<int> prices = {4,2,1,5,9,8}; //prices on each days
int main()
{
  int maxi = prices.at(prices.size() - 1);
  int maxDiff = 0;
  for (int i = prices.size() - 2; i >= 0; i--)
  {
    maxi = max(maxi, prices[i + 1]);
    maxDiff = max(maxDiff, maxi - prices[i]);
  }

  cout << maxDiff;
}