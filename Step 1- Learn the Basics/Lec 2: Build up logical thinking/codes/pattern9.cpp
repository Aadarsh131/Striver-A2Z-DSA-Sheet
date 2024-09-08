#include <iostream>
#include <string>
using namespace std;

int main()
{
  int rows;
  cin >> rows;
  int d = 2;
  int highestStars = 1 + (rows - 1) * d; // ap

  // erect pyramid
  for (int i = 1; i <= rows; i++)
  {
    int stars = 1 + (i - 1) * d;
    int spaces = highestStars - stars;

    cout << string(spaces / 2, ' ');
    cout << string(stars, '*');
    cout << string(spaces / 2, ' ') << endl;
  }

  // inverted pyramid
  for (int i = rows; i >= 1; i--)
  {
    int stars = 1 + (i - 1) * d;
    int spaces = highestStars - stars;

    cout << string(spaces / 2, ' ');
    cout << string(stars, '*');
    cout << string(spaces / 2, ' ') << endl;
  }
}