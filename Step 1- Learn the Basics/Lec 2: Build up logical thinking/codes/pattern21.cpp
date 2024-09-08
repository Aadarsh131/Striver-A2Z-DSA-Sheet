#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int spaces = n - 2;
  for (int i = 1; i <= n; i++)
  {
    if (i == 1 || i == n)
    {
      cout << string(n, '*') << endl;
    }
    else
    {
      cout << "*";
      cout << string(spaces, ' ');
      cout << "*" << endl;
    }
  }
}