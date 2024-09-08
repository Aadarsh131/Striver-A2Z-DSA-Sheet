#include <iostream>
#include <string>
using namespace std;

int main()
{
  int total_rows;
  cin >> total_rows;
  int d = 2;                                  // each row is increasing by 2 stars
  int lastRowStar = 1 + (total_rows - 1) * d; // using arithmetic progression(ap)- an = a + (n-1)d

  int stars;
  for (int i = 1; i <= total_rows; i++)
  {
    stars = 1 + (i - 1) * d; // ap
    int spaces = lastRowStar - stars;
    int leftSpace, rightSpace;
    leftSpace = rightSpace = spaces / 2;

    cout << string(leftSpace, ' ');
    cout << string(stars, '*');
    cout << string(rightSpace, ' ') << endl;
  }
}