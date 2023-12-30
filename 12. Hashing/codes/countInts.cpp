#include<bits/stdc++.h>
using namespace std;

//if globally we left the array uninitialized, then the default value will not be garbage

//maximum size of int array GLOBALLY : 10 ^ 7
//maximum size of int array inside main: 10 ^ 6

//maximum size of boolean array GLOBALLY : 10 ^ 8
//maximum size of boolean array inside main: 10 ^ 7

int main(){
  int n;
  cin >> n;
  
  int a[n] = {0}; 
  for(int i=0; i<n;i++){
    cin >> a[i];
  }

  //precompute hash array
  int hash[10] = {0};
  for(int i=0; i<n;i++){
    hash[a[i]]++;
  }

  int q;
  cin >> q;
  while(q--){
    int number;
    cin >> number;
    //fetch
    cout << hash[number] << endl;
  }
}