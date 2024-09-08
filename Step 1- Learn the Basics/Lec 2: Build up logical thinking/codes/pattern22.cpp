#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int sqSize = n * 2 - 1; //length of side of square to be formed

  for (int i = 0; i < sqSize; i++)
  {
    for (int j = 0; j < sqSize; j++)
    {
      int top = i;
      int bottom = sqSize - 1 - i;
      int left = j;
      int right = sqSize - 1 - j;
      cout << (n - min(min(top, bottom), min(left, right)));
    }
    cout << endl;
  }
}
