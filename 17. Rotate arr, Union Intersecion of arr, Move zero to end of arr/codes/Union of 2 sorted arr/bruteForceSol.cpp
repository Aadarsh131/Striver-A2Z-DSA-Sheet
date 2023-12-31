#include<bits/stdc++.h>
using namespace std;

int arr1[] = {1,2,2,3,3,4,5};
int arr2[] = {0,1,2,4,4,5,5,6,6};

int main(){
  set<int> temp;

  int n1 = sizeof(arr1)/sizeof(arr1[0]);
  int n2 = sizeof(arr2)/sizeof(arr2[0]);

  //O(n1 logN) (logN is of set insertion complexity and n1 is loop traversal)
  for(int i=0; i<n1; i++){
    temp.insert(arr1[i]);
  }

  //O(n2 logN) 
  for(int i=0; i<n2; i++){
    temp.insert(arr2[i]);
  }

  vector<int> unionn;
  //worst case- O(n1+n2)
  for(auto it : temp){
    unionn.push_back(it);
  }
  
  for(auto it: unionn){
    cout << it;
  }
}