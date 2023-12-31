#include<bits/stdc++.h>
using namespace std;

int arr[] = {1,2,3,4,5,6,7,8,9};

void swap(int arr[], int i, int j){
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void reverse(int arr[], int low, int high){
  while(low < high){
    swap(arr,low,high);
    low++;
    high--;
  }
}

int main(){
  cout << "How many places to be shifted? ";
  int k;
  cin >> k;

  int size = sizeof(arr)/sizeof(arr[0]);

  reverse(arr,0,k-1); // O(k/2)
  reverse(arr,k,size-1);// O((n-k)/2)
  reverse(arr,0,size-1);// O(n/2)
  //time complexity = O(n)
  //space complexiyt = O(1) (inplace algo)

  //print array
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
}