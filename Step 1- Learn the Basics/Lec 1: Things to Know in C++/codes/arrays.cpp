#include <iostream>
using namespace std;

int main()
{
  // 2d array
  int arr[5];
  arr[0] = 0;
  arr[1] = 1;
  arr[2] = 2;
  arr[3] = 3;
  arr[4] = 4;
  cout << arr[2] << endl;

  // 3d array
  int arr3d[3][4]; // arr[row][col]
  arr3d[2][0] = 3;
  cout << arr3d[2][0] << endl;
  cout << arr3d[9][0] << endl; // output- garbage value
}