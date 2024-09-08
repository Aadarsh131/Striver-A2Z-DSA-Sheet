#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int d = 2;
  int highestStars = 1 + (n - 1) * d; // ap

  for (int i = n; i >= 1; i--)
  {
    int stars = 1 + (i - 1) * d;
    int spaces = highestStars - stars;

    cout << string(spaces / 2, ' ');
    cout << string(stars, '*');
    cout << string(spaces / 2, ' ') << endl;
  }
}