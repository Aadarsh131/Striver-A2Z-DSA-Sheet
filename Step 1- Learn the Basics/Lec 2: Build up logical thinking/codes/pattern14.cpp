#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // int asciiValue = int('A');
  char c = 'A';
  for (int i = 1; i <= n; i++)
  {
    char ch = 'A';
    int j = i;
    while (j--)
    {
      cout << ch;
      ch++;
    }
    cout << endl;
  }
}