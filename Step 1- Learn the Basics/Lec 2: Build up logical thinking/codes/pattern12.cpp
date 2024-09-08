#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int lastRowLen = n * 2;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    int spaces = lastRowLen - (i * 2);
    cout << string(spaces, ' ');

    for (int j = i; j >= 1; j--)
    {
      cout << j;
    }
    cout << endl;
  }
}