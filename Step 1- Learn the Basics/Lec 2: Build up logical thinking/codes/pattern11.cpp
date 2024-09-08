#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int j;
    if (i % 2 == 0)
      j = 0;
    else
      j = 1;
    int temp = i;
    while (temp--)
    {
      cout << j << " ";
      if (j)
        j = 0;
      else
        j = 1;
    }
    cout << endl;
  }
}