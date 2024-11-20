#include <iostream>
#include <string>
#include <climits>

using namespace std;

void badway(int &n){
  int lastRowLen = n * 2; // NOTE: doing this is not advisable as n*2 might not fit in an int (in case where n is INT_MAX)
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    int spaces = lastRowLen - (i * 2);
    cout << string(spaces, ' ');

    for (int j = i; j >= 1; j--)
    {
      cout << j;
    }
    cout << endl;
  }
  }

void goodway(int &n){
  int x = n-1;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout << j;
    }

    // for(int j = 1; j<= x; j++){
    //   cout << " ";
    // } 
    // for(int j = 1; j<= x; j++){
    //   cout << " ";
    // } 
    // x--;

    //OR
    // if(len(x))
    cout << string(x,' ');
    cout << string(x,' ');
    x--;

    for(int j=i; j>=1; j--){
      cout << j;
    }
    cout << endl;
  }
}

int main()
{
 int n = 9;
//  badway(n); 
 goodway(n);
}