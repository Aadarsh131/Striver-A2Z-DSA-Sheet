#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int i = 1;
  for (int j = 1; j <= n; j++)
  {
    int k = j;
    while (k--)
    {
      cout << i << " ";
      i++;
    }
    cout << endl;
  }
}