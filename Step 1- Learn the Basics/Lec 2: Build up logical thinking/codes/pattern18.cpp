#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  char lastChar = 'A' + n - 1;
  for (int i = 0; i < n; i++)
  {
    for (char j = lastChar - i; j <= lastChar; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}