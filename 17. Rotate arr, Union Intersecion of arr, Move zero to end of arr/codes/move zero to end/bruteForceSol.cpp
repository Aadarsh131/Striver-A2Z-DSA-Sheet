#include<bits/stdc++.h>
using namespace std;

int arr[] = {2,0,5,3,0,4,1,6,0,4,0};
int main(){
  int size = sizeof(arr)/sizeof(arr[0]);
  vector<int> tempArr;

  for(int i=0; i<size; i++){
    if(arr[i] != 0){
      tempArr.emplace_back(arr[i]);
    }
  }
  int i = size-(tempArr.size());
  while(i--){
    tempArr.emplace_back(0);
  }

  //copy tempArr to original arr
  for(int i=0; i<size; i++){
    arr[i] = tempArr[i];
  }
}