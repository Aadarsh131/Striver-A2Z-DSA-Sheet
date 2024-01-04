#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> arr = {2,6,5,8,1};

  cout << "Enter the target sum: ";
  int t;
  cin >> t;

  for(int i=0; i < arr.size()-1; i++){
    for(int j=i+1; j<arr.size();j++){
      if(arr[i]+arr[j] == t){
        cout << "[" << i << "," << j << "]";
        break;
      }
    }
  }
}