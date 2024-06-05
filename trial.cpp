#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> arr = {1,2,4,5,6};
  int k;
  cin >> k;

  int n = arr.size();
  k = k % n;

  vector<int> tempArr;
  for(int i=0; i<k; i++){
    tempArr.emplace_back(arr[i]);
  }

  for(int i = k; i< n; i++){
    arr[i-k] = arr[i];
  }

  for(int i = n-k, j = 0; i < n; i++, j++){
    arr[i] = tempArr[j];
  }

  for(auto i: arr){
    cout << i << " ";
  }
}