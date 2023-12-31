#include<bits/stdc++.h>
using namespace std;

int arr[] = {1,2,3,4,5,6};

//shift by k places
// Time Complexity: O(N+K)
// Space Complexity: O(K)
void leftShift(int arr[], int n ,int k){
  if(k<=0){
    return;
  }

  k = k % n;

  vector<int> tempArr;
  for(int i=0; i<k; i++){
    tempArr.emplace_back(arr[i]);
  }

  for(int i=k; i<n; i++){
    arr[i-k] = arr[i];
  }

  for(int i=n-k, j=0; i<n; i++, j++){
    arr[i] = tempArr[j];
  }
}

int main(){
  cout << "How many places to be shifted? ";
  int k;
  cin >> k;

  int n = sizeof(arr)/sizeof(arr[0]);

  leftShift(arr, n, k); 

  //print arr
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}
