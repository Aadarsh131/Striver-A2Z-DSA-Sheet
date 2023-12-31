#include<bits/stdc++.h>
using namespace std;

int arr[] = {2,0,0,0,0,4,1,6,0,4,0};
// int arr[] = {1,2,3,4,5};

void swap(int arr[], int i, int j){
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int main(){
  int n = sizeof(arr)/sizeof(arr[0]);
  
  //search for the first 0
  int i=0;
  while(i<n){
    if(arr[i] == 0) break;
    i++;
  }

  int j = i+1;
  for(j; j<n; j++){
    if(arr[j] ==0){
      continue;
    }
    swap(arr,i,j);
    i++;
  }

  for(int i=0;i<n; i++){
    cout << arr[i] << " ";
  }
}