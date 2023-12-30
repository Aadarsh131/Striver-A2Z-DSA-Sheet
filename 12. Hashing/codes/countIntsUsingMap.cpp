#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int a[n] = {0};
  for(int i=0; i<n;i++){
    cin >> a[i];
  }

  //map time complexity- worst,average and best is O(logN)
  //unordered_map time complexity: Average and best is O(1) and worst is O(N)
  map<int, int> hash; 
  for(int i=0 ; i<n; i++){
    hash[a[i]]++;
  }

  for(auto i : hash){
    cout << i.first << "->" << i.second << endl;
  }

  int q;
  cin >> q;
  while(q--){
    int v;
    cin >> v;
    //fetch
    cout << hash[v] << endl;
  }
}