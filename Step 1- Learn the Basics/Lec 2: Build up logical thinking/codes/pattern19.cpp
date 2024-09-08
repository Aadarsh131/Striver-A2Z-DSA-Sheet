#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int maxStars = n * 2;
  for (int i = n; i >= 1; i--)
  {
    int stars = i * 2;
    int spaces = maxStars - stars;
    cout << string(stars / 2, '*');
    cout << string(spaces, ' ');
    cout << string(stars / 2, '*') << endl;
    }

  for (int i = 1; i <= n; i++)
  {
    int stars = i * 2;
    int spaces = maxStars - stars;
    cout << string(stars / 2, '*');
    cout << string(spaces, ' ');
    cout << string(stars / 2, '*')<<endl;
  }
}