#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = n; i >= 1; i--)
  {
    char c = 'A';
    int j = i;
    while (j--)
    {
      cout << c;
      c++;
    }
    cout << endl;
  }
}